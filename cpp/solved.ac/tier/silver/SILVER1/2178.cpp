#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M; // N=행, M=열

    vector<vector<int>> maze(N, vector<int>(M));
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        for(int j = 0; j < M; j++){
            maze[i][j] = s[j] - '0';
        }
    }

    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0] = true;

    while(!q.empty()){
        auto [x, y] = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0 && nx < N && ny < M){
                if(maze[nx][ny] == 1 && !visited[nx][ny]){
                    visited[nx][ny] = true;
                    maze[nx][ny] = maze[x][y] + 1; // 이전 거리 +1
                    q.push({nx, ny});
                }
            }
        }
    }

    cout << maze[N-1][M-1] << '\n';
    return 0;
}
