#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SortWord(vector<pair<int, string>>& sw) {
  
    sort(sw.begin(), sw.end(), [](const auto& a, const auto& b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

  
    for (int i = 0; i < sw.size(); i++) {
        if (i == 0 || sw[i].second != sw[i - 1].second) {
            cout << sw[i].second << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, string>> sw;
    sw.reserve(N); 

    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        sw.push_back({(int)s.size(), s});
    }

    SortWord(sw);
    return 0;
}
