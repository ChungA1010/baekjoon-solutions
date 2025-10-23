#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int a;
    cin >> s >> a;

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        int b;
        if (s[i] >= '0' && s[i] <= '9')
            b = s[i] - '0';
        else
            b = s[i] - 'A' + 10;

        sum = sum * a + b;
    }

    cout << sum;
    return 0;
}
