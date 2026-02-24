#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int maxVal = N * N;
    int w = to_string(maxVal).size();

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << setw(w) << (i * j);
            if (j != N) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}
