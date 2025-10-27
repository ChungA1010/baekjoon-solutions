#include <iostream>
#include <vector>
using namespace std;

bool findFact(int n){
    if(n < 2) return false;

    for(int i = 2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int sum = 0;
    
    for(int i = 0; i<n; i++){
        cin >> nums[i];
    }

    for(int i = 0; i<n; i++){
        if(findFact(nums[i])){
            sum++;
        }
    }
    cout << sum;
    return 0;
}