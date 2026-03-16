#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<vector<char>> board;
vector<vector<bool>> vis;
int sum = 0;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, char c){
    vis[x][y] = true;
    sum++;

    for(int i = 0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || nx >= M|| ny < 0 || ny >= N) continue;
        if(vis[nx][ny]) continue;
        if(board[nx][ny] != c) continue;
        dfs(nx,ny,c);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    board.resize(M, vector<char>(N));

    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            cin >> board[i][j];
        }
    }

    int Wsum = 0, Bsum = 0;
    vis.resize(M, vector<bool>(N));

    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            if(board[i][j] == 'W' && !vis[i][j]){
                dfs(i, j, 'W');
                Wsum += sum * sum;
            }else if(board[i][j] == 'B' && !vis[i][j]){
                dfs(i, j, 'B');
                Bsum += sum * sum;
            }
            sum = 0;
        }
    }

    cout << Wsum << ' ' << Bsum;

    return 0;
}