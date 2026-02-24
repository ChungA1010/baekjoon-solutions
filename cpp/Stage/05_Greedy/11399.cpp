#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> atm(N);

    for(int i = 0; i<N; i++){
        cin >> atm[i];
    }

    sort(atm.begin(), atm.end());

    long long prefix = 0;
    long long ans = 0;

    for(int i =0; i<N; i++){
        prefix += atm[i];
        ans += prefix;
    }

    cout << ans;

    return 0;
}