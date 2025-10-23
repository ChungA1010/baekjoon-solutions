#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    string result = "";

    if (N == 0) {  
        cout << 0 << '\n';
        return 0;
    }

    while (N > 0) {
        int r = N % B;
        if (r < 10) result += (r + '0');
        else result += (r - 10 + 'A');
        N /= B;
    }

    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << '\n';

    return 0;
}
