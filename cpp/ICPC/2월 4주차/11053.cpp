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
    vector<int> prev(N + 1, 0);
    
    int bestlen = 0;
    int bestend = 0;

    for(int i = 1; i<=N; i++){
        for(int j = 1; j<i; j++){
            if(arr[j] < arr[i] && dp[j] + 1 > dp[i]){
                prev[i] = j;
                dp[i] = dp[j] + 1;
            }
        }
        if(bestlen < dp[i]){
            bestlen = dp[i];
            bestend = i;            
        }
    }

    vector<int> ans;
    for(int cur = bestend; cur != 0; cur = prev[cur]){
        ans.push_back(arr[cur]);
    }
    reverse(ans.begin(), ans.end());

    cout << bestlen << '\n';
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << (i == ans.size() - 1 ? "\n" : " ");
    }    

    return 0;
}