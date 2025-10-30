#include <iostream>
using namespace std;

bool isPrime(int N){
    if(N < 2) return false;
    if(N == 2) return true;
    if(N%2 == 0) return false;
    for(int i = 3; i * i <= N; i += 2){
        if(N % i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int sum;
    while(1){
        cin >> N;
        sum = 0;
        if(N == 0) break;

        for(int i = N + 1; i <= 2 * N; i++){
            if(isPrime(i)) sum++;
        }
        cout << sum << '\n';
    }

    return 0;
}