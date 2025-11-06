#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> stair(t+1);
    
    for(int i = 1; i<=t; i++){
        cin >> stair[i];
    }

    vector<int> dp(t + 1, 0);

    dp[1] = stair[1];
    if(t >= 2) dp[2] = stair[1] + stair[2];
    for(int i = 3; i <= t; i++){
        dp[i] = max(dp[i-2], dp[i-3] + stair[i-1]) + stair[i];
    }

    cout << dp[t];
    return 0;
}