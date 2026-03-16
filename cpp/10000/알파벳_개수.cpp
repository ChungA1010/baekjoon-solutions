#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> v(26);
    for(int i = 0; i<s.size(); i++){
        v[s[i]-'a']++;
    }

    for(int i = 0; i<26; i++){
        cout << v[i] << " ";
    }

    return 0;
}