#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<pair<int, bool> > high(9);
    int sum = 0;
    bool find = false;

    for(int i = 0; i<9; i++){
        cin >> high[i].first;
        high[i].second = true;
    }

    for(int i = 0; i<8; i++){
        for(int j = i+1; j<9; j++){
            high[i].second = false;
            high[j].second = false;
            for(int k = 0; k < 9; k++){
                if(high[k].second){
                    sum += high[k].first;
                }
            }
            if(sum == 100){
                find = true;
                break;
            }
            high[i].second = true;
            high[j].second = true;
            sum = 0;
        }
        if(find == true){
            break;
        }
    }

    sort(high.begin(), high.end());

    for(int i = 0; i<9; i++){
        if(high[i].second != false){
            cout << high[i].first << "\n";
        }
    }

    return 0;
}