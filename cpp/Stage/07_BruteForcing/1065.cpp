#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count = 0;
    int result = 0;

    if(N < 100) cout << N;
    else{
        for(int i = 100; i<=N; i++){
            if(i == 1000) continue;
            string s = to_string(i);\
            int temp1 = s[0] - s[1];
            int temp2 = s[1] - s[2];
            if(temp1 == temp2) count++;
        }
        result += count;
        result += 99;
        cout << result;
    }

    return 0;
}