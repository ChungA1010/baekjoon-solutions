#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int INF = 1e9;
    vector<int> dp(N + 1, INF);
    dp[1] = 0;

    for(int i = 2; i<= N; i++){
        if(i%3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
        if(i%2==0) dp[i] = min(dp[i], dp[i/2] + 1);
        dp[i] = min(dp[i], dp[i-1] + 1);
    }

    cout << dp[N];

    return 0;
}