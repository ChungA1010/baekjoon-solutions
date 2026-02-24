#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 0, y = 0;

    for(int i = 0; i<3; i++){
        int a, b;
        cin >> a >> b;
        x ^= a;
        y ^= b;
    }

    cout << x << ' ' << y;

    return 0;
}