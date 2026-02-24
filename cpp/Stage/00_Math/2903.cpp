#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;

    int n = (1 << r) + 1;
    cout << n * n;
    return 0;
}
