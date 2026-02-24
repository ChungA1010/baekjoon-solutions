#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;

    long long ans = 1;

    while(b > 0){
        if(b & 1) ans = (ans * a) % c;
        a = (a * a) % c;
        b >>= 1;
    }

    cout << ans;

    return 0;
}