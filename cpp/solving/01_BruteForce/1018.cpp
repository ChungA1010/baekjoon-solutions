#include <iostream>
#include <vector>
using namespace std;

int main(){
    int M, N;
    cin >> M >> N;

    vector<vector<int> > v1(8, vector<int>(8));
    vector<vector<int> > v2(8, vector<int>(8));
    vector<vector<int> > v(M, vector<int>(N));

    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            v1[i][j] = (i + j) % 2;
            v2[i][j] = (i + j + 1) % 2;
        }
    }

    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            char a;
            cin >> a;
            if(a == 'B'){
                v[i][j] = 0;
            }else{
                v[i][j] = 1;
            }
        }
    }

    
        
    return 0;
}