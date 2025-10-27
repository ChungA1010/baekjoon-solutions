#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& N) {
    int left = 0;
    int right = N.size() - 1;
    while (left < right) {
        if (N[left++] != N[right--]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    while(1){
        cin >> N;
        if(N == "0") break;

        cout << (isPalindrome(N)? "yes\n" : "no\n");
    }

    return 0;
}