#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> num(12);
vector<int> sym(4);
int result = 0;
int maxval = -1000000000;
int minval = 1000000000;

void solve(int a, int val){
    if(a == 1) val += num[a];
    if(a == num.size()){
        result = val;
        if(maxval < result) maxval = result;
        if(minval > result) minval = result;
    }
    solve(a+1, val + num[a+1]);
    solve(a+1, val - num[a+1]);
    solve(a+1, val * num[a+1]);
    solve(a+1, val / num[a+1]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for(int i = 1; i<=t; i++){
        cin >> num[i];
    }

    for(int i = 0; i<4; i++){
        cin >> sym[i];
    }

    solve(1,0);
    cout << maxval << '\n';
    cout << minval << '\n';

    return 0;
}