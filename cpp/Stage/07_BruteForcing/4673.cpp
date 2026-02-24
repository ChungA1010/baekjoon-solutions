#include <iostream>
#include <vector>
#include <string>
using namespace std;

int dn(int n){
    int sum = 0;
    sum += n;
    string s = to_string(n);
    for(int i = 0; i<s.size(); i++){
        sum+= s[i] - '0';
    }
    return sum;
}

int main(){
    vector<bool> v(10001, false);
    int result = 0;

    for(int i = 1; i<10001; i++){
        result = dn(i);
        if(result <= 10000){
            v[result] = true;
        }
    }

    for(int i = 1; i< 10001; i++){
        if(v[i] == false){
            cout << i << "\n";
        }
    }

    return 0;
}