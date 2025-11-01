#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int bfs(vector<vector<int>>& field, int x, int y, int M){
    queue<pair<int, int>> q;
    int cnt = 1;
    q.push({x,y});
    field[x][y] = 0;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i<4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx >= 0 && nx < M && ny >= 0 && ny < M && field[nx][ny] == 1){
                field[nx][ny] = 0;
                q.push({nx, ny});
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    vector<vector<int>> field(T, vector<int>(T, 0));

    for(int i = 0; i<T; i++){
        string row;
        cin >> row;
        for(int j = 0; j < T; j++){
            field[i][j] = row[j] - '0';
        }
    }

    int cnt = 0;
    vector<int> complex;
    for(int i = 0; i<T; i++){
        for(int j = 0; j<T; j++){
            if(field[i][j] == 1){
                complex.push_back(bfs(field, i, j, T));
                cnt++;
            }
        }
    }

    sort(complex.begin(), complex.end());

    cout << cnt << '\n';
    for(int c : complex) cout << c << '\n';

    return 0;
}