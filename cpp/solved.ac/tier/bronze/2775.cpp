#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nums[15][15] = {};

    for (int i = 0; i <= 14; i++) nums[0][i] = i + 1;
    for (int i = 1; i <= 14; i++)
        for (int j = 0; j <= 14; j++)
            nums[i][j] = (j == 0) ? 1 : nums[i][j - 1] + nums[i - 1][j];

    int T;
    cin >> T;
    while (T--) {
        int K, N;
        cin >> K >> N;
        cout << nums[K][N - 1] << '\n';
    }
}
