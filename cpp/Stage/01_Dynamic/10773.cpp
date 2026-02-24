#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> stack;
    int k;
    cin >> k;
    int n;

    while(k--){
        cin >> n;
        if(n != 0) stack.push_back(n);
        else{
            stack.pop_back();
        }
    }

    long long sum = 0;
    for(int x : stack) sum += x;

    cout << sum;

    return 0;
}