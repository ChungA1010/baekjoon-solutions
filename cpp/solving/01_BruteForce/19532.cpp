#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> exp1(3);
    vector<int> exp2(3);
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i<3; i++){
        cin >> exp1[i];
    }
    for(int i = 0; i<3; i++){
        cin >> exp2[i];
    }

    for(int i = -999; i<1000; i++){
        for(int j = -999; j<1000; j++){
            if(exp1[2] == (exp1[0]*i + exp1[1]*j) && exp2[2] == (exp2[0]*i + exp2[1]*j)){
                cout << i << ' ' << j;
                return 0;
            }
        }
    }

    return 0;
}