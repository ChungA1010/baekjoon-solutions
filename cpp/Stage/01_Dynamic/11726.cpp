#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> dp(n + 1);

    if(n >=1 )dp[1] = 1;
    if(n >= 2)dp[2] = 2;

    for(int i = 3; i<=n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }
    cout << dp[n] % 10007;

    return 0;
}