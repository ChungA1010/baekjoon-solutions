#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> arr(N + 1);

    for(int i = 1; i<=N; i++){
        cin >> arr[i];
    }

    vector<int> dp(N + 1, 1);
    int ans = 1;

    for(int i = 1; i<= N; i++){
        for(int j = 1; j<i; j++){
            if(arr[j] > arr[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans;

    return 0;
}