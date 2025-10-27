#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<pair<char, char>> chess(N * M);

    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            if(j %2 == 0){
                cin >> chess[i * M + j].first;
                if(j != 0){
                    chess[i * M + j].second = chess[(i-1) * M + j].first;
                }
            }else{
                cin >> chess[i * M + j].second;
                chess[(i-1) * M + j].second = chess[i * M + j].second;
            }
        }
    }

    return 0;
}