#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s1.size();
    int size2 = s2.size();

    int sum = 1e9;
    for(int i = 0; i<=size2-size1; i++){
        int temp = 0;
        for(int j = 0; j<size1; j++){
            if(s1[j] != s2[i+j]) temp++;
        }
        sum = min(sum, temp);
    }

    cout << sum;

    return 0;
}