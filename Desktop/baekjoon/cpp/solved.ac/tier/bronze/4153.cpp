#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        if (!a && !b && !c) break;

        // sort 없이 직접 최대값 판단
        int mx = max({a, b, c});
        int sumsq = a * a + b * b + c * c - mx * mx;

        cout << (mx * mx == sumsq ? "right\n" : "wrong\n");
    }

    return 0;
}
