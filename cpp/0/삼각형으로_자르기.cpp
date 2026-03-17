#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    vector<pair<int, int>> board(N);
    for(int i = 0; i<N; i++){
        cin >> board[i].first >> board[i].second;
    }

    double ans = 0;

    for(int i = 0; i<N; i++){
        for(int j = i + 1; j<N; j++){
            for(int k = j + 1; k<N; k++){
                double temp;
                double f = board[i].first*board[j].second + board[j].first*board[k].second + board[k].first*board[i].second;
                double b = board[j].first*board[i].second + board[k].first*board[j].second + board[i].first*board[k].second;
                temp = abs(f - b) / 2.0;
                ans = max(ans, temp);
            }
        }
    }

    cout << fixed << setprecision(1) << ans;

    return 0;
}