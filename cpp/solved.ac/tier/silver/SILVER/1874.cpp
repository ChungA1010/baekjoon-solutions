#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> nums;
    int cur = 1;
    string output;

    while(N--){
        int target;
        cin >> target;

        while(cur <= target){
            nums.push_back(cur++);
            output += "+\n";
        }

        if(!nums.empty() && nums.back() == target){
            nums.pop_back();
            output += "-\n";
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << output;

    return 0;
}