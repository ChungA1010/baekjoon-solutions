#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r = 1, t= 6, i = 0;

    while(n>r){
        r += t;
        t += 6;
        i++;
    }
    cout << i;
    
    return 0;
}