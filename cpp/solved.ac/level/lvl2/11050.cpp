#include <iostream>
using namespace std;

int binomial(int n, int k){
    if (k > n - k) k = n - k;  
    int result = 1;
    for (int i = 1; i <= k; i++) {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    cout << binomial(N, K);

    return 0;
}