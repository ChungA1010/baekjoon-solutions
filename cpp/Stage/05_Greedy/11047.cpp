#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    vector<int> coin(N);
    int count = 0;

    for(int i = 0; i<N; i++){
        cin >> coin[i];
    }

    for(int i = N-1; i>= 0; i--){
        if(K >= coin[i]){
            int temp = 0;
            temp += K / coin[i];
            K -= coin[i] * temp;
            count += temp;
        }
    }

    cout << count;

    return 0;
}