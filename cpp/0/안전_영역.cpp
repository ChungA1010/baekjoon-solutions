#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> board;
vector<vector<bool>> vis;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int h){
    vis[x][y] = true;

    for(int i = 0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
        if(vis[nx][ny]) continue;
        if(board[nx][ny] <= h) continue;

        dfs(nx,ny,h);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    board.resize(N, vector<int>(N));
    int mx = 0;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cin >> board[i][j];
            mx = max(mx, board[i][j]);
        }
    }

    int ans = 0;

    for(int h = 0; h<=mx; h++){
        vis.assign(N, vector<bool> (N, false));
        int cnt = 0;

        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                if(board[i][j] > h && !vis[i][j]){
                    dfs(i, j, h);
                    cnt++;
                }
            }
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}