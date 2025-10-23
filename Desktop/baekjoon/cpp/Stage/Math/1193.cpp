#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r = 1, u, d, t = 1;

    while(n > r){
        t++;
        r += t;
    }

    int pos = n - (r-t);

    if(t % 2 == 0){
        d = t - (pos-1);
        u = pos;
    }else{
        u = t - (pos - 1);
        d = pos;
    }

    cout << u << "/" << d;
    return 0;
}