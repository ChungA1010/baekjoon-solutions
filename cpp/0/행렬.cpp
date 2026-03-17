#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; cin >> N >> M;
    vector<string> A(N);
    vector<string> B(N);

    for(int i = 0; i<N; i++){
        cin >> A[i];
    }

    for(int i = 0; i<N; i++){
        cin >> B[i];
    }
    if(N <3 || M < 3){
        if(A == B) cout << 0;
        else cout << -1;
        return 0;
    }
    int cnt = 0;

    for(int i = 0; i<N-2; i++){
        for(int j = 0; j<M-2; j++){
            if(A[i][j] != B[i][j]){
                cnt++;
                for(int k = 0; k<3; k++){
                    for(int l = 0; l <3; l++){
                        if(A[i+k][j+l] == '1'){
                            A[i+k][j+l] = '0';
                        }else{
                            A[i+k][j+l] = '1';
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            if(A[i][j] != B[i][j]){
                cout << -1;
                return 0;
            }
        }
    }
    cout << cnt;

    return 0;
}