#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> board(5);
    for(int i = 0; i<5; i++){
        cin >> board[i];
    }
    sort(board.begin(), board.end());
    int ans;
    for(int i = board[2]; ;i++){
        int cnt = 0;
        for(int j = 0; j<5; j++){
            if(i % board[j] == 0){
                cnt++;
            }
        }
        if(cnt >= 3){
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}