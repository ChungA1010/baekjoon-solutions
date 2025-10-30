#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    for(int i = 3; i * i<= n; i += 2){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    for(int i = M; i<= N; i++){
        if(isPrime(i)){
            cout << i << '\n';
        }
    }

    return 0;
}