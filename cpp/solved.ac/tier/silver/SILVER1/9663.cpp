#include <iostream>
using namespace std;

int N, cnt = 0;
bool col[15], diag1[30], diag2[30];

void solve(int row){
    if(row == N){
        cnt++;
        return;
    }
    for(int c = 0; c < N; c++){
        if(!col[c] && !diag1[row + c] && !diag2[row - c + N - 1]){
            col[c] = diag1[row+c] = diag2[row-c+N-1] = true;
            solve(row + 1);
            col[c] = diag1[row+c] = diag2[row-c+N-1] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    solve(0);
    cout << cnt;

    return 0;
}