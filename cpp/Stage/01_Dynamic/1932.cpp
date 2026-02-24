#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> dp;
    
    int k;
    cin >> k;

    dp.resize(k, vector<int>(k));

    for(int i = 0; i<k; i++){
        for(int j = 0; j<= i; j++){
            cin >> dp[i][j];
        }
    }

    vector<vector<int>> sum(k, vector<int>(k));
    sum[0][0] = dp[0][0];

    for(int i = 1; i<k; i++){
        for(int j = 0; j<=i; j++){
            if(j == 0){
                sum[i][j] = sum[i-1][j] + dp[i][j];
            }else if(j == i){
                sum[i][j] = sum[i-1][j-1] + dp[i][j];
            }else{
                sum[i][j] = dp[i][j] + max(sum[i-1][j-1], sum[i-1][j]);
            }
        }
    }

    int maxidx = sum[k-1][0];
    for(int i = 1; i<k; i++){
        if(maxidx < sum[k-1][i]) maxidx = sum[k-1][i];
    }

    cout << maxidx;
    return 0;
}