#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
string result = " is NOT perfect.";

int main(){
    int n, pair;

    while(1){
        cin >> n;
        if(n == -1) break;

        vector<int> factor;
        int sum = 0;

        for(int i = 1; i * i <= n; i++){
            if(n%i == 0){
                pair = n/i;

                if(i != n){
                    factor.push_back(i);
                    sum += i;
                }
                if(pair != n && pair != i){
                    factor.push_back(pair);
                    sum += pair;
                }
            }
        }

        sort(factor.begin(), factor.end());

        if(sum == n){
            cout << n << " = " << factor[0];
            for(int i = 1; i<factor.size(); i++){
                cout << " + " << factor[i] ;
            }
            cout << '\n';
        }else{
            cout << n << result << '\n';
        }
    }

    return 0;
}