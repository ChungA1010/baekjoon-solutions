#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    vector<int> card(N);
    for(int i = 0; i<N; i++) cin >> card[i];

    sort(card.begin(), card.end());

    int M; cin >> M;
    for(int i = 0; i<M; i++){
        int x; cin >> x;
        auto lo = lower_bound(card.begin(), card.end(), x);
        auto hi = upper_bound(card.begin(), card.end(), x);
        cout << (hi - lo) << ' ';
    }

    return 0;
}