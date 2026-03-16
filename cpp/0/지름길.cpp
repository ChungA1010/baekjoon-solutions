#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int INF = 1e9;
vector<int> dp(10001, INF);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, D;
    cin >> N >> D;
    vector<vector<pair<int, int>>> road(D + 1);

    for(int i = 0; i<N; i++){
        int a, b, c;
        cin >> a >> b >> c;
        road[a].push_back({b, c});
    }

    dp[0] = 0;
    for(int i = 0; i<=D; i++){
        dp[i + 1] = min(dp[i] + 1, dp[i + 1]);

        for(auto[n, v] : road[i]){
            dp[n] = min(dp[n], dp[i] + v);
        }
    }

    cout << dp[D];

    return 0;
}