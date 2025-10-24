#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    int count[10001] = {};
    cin >> N;
    int x;

    for(int i = 0; i<N; i++){
        cin >> x;
        count[x]++;
    }

    for(int i = 0; i<10001; i++){
        while(count[i]--){
            cout << i << '\n';
        }
    }

    return 0;
}