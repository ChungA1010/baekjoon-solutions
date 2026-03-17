#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; cin >> N >> M;
    vector<string> board(N);

    for(int i = 0; i<N; i++){
        cin >> board[i];
    }

    int mn = min(N, M);
    int ans = 1;

    for(int l = mn-1; l >= 1; l--){
        bool found = false;
        for(int i = 0; i<N-l; i++){
            for(int j = 0; j<M-l; j++){
                bool check = true;

                char cnt = board[i][j];

                int dx[3] = {l, l, 0};
                int dy[3] = {0, l, l};

                for(int k = 0; k<3; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if(cnt != board[nx][ny]){
                        check = false;
                        break;
                    }   
                }

                if(check){
                    ans = max(ans, l + 1);
                    found = true;
                    break;
                }
            }
            if(found)break;
        }
        if(found) break;
    }

    cout << ans * ans;

    return 0;
}