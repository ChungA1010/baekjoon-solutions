#include <iostream>
#include <string>
using namespace std;

int main(){
    string nums;
    int sum = 0; 
    int result = 0;
    int index;

    cin >> nums;

    for(int i = 0; i<13; i++){
        if(nums[i] == '*'){
            index = i;
            continue;
        }
        else if(i % 2 == 0) sum += nums[i] - '0';
        else sum += (nums[i] - '0') * 3;
    }

    for(int i = 0; i<= 9; i++){
        if(index % 2 == 0){
            if((sum + i) % 10 == 0) {
                result = i;
                break;
            }
        }else{
            if((sum+i * 3) % 10 == 0){
                result = i;
                break;
            }
        }
    } 

    cout << result;

    return 0;
}