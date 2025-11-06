#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
vector<int> num;
int op[4];
int maxval = -1000000000;
int minval = 1000000000;

void solve(int a, int val){
    if( a == N ){
        maxval = max(maxval, val);
        minval = min(minval, val);
        return;
    }

    for(int i = 0; i<4; i++){
        if(op[i] > 0){
            op[i]--;
            switch(i){
                case 0:
                    solve(a+1, val + num[a]);
                    break;
                case 1:
                    solve(a+1, val - num[a]);
                    break;
                case 2:
                    solve(a+1, val * num[a]);
                    break;
                case 3:
                    if(num[a] != 0)
                        solve(a+1, val / num[a]);
                    break;
            }
            op[i]++;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    num.resize(N);

    for(int i = 0; i<N; i++){
        cin >> num[i];
    }

    for(int i = 0; i<4; i++){
        cin >> op[i];
    }

    solve(1,num[0]);
    cout << maxval << '\n';
    cout << minval << '\n';

    return 0;
}