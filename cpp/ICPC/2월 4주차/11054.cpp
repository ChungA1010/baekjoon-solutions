#include <iostream>
#include <vector>
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

    vector<int> inc(N + 1, 1);
    vector<int> dec(N + 1, 1);
    int mx = 0;

    for(int i = 1; i<= N; i++){
        for(int j = 1; j<i; j++){
            if(arr[j] < arr[i]){
                inc[i] = max(inc[i], inc[j] + 1);
            }
        }
    }

    for(int i = N; i>= 1; i--){
        for(int j = N; j>i; j--){
            if(arr[j] < arr[i]){
                dec[i] = max(dec[i], dec[j] + 1);
            }
        }
    }

    for(int i = 1; i<=N; i++){
        mx = max(mx, inc[i] + dec[i] - 1);
    }
    cout << mx;

    return 0;
}