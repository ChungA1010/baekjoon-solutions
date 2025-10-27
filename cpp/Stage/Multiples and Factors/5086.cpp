#include<iostream>
#include<string>
#include<vector>
using namespace std;
string result[3] = {"factor", "multiple", "neither"};

int main(){
    vector<pair<int,int>> nums;
    int x1, x2;
    int j;

    while(1){
        cin >> x1 >> x2;
        if(x1 == 0 && x2 == 0) break;
        nums.push_back({x1, x2});
    }

    for(auto [f,l] : nums){
        if(l%f == 0) j = 0;
        else if(f % l == 0) j = 1;
        else j = 2;
        cout << result[j] << "\n";
    }

    return 0;
}