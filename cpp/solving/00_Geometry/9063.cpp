#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int minx = 10001, maxx = -10001;
    int miny = 10001, maxy = -10001;

    for(int i = 0; i<N; i++){
        int x, y;
        cin >> x >> y;
        minx = min(minx, x);
        maxx = max(maxx, x);
        miny = min(miny, y);
        maxy = max(maxy, y);
    }

    cout << (maxx - minx) * (maxy - miny);

    return 0;
}