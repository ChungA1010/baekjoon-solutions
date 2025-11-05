#include <iostream>
using namespace std;

struct Sum{
    int cnt = 0;
    
    Sum(){

    }

    void find(int n){
        
        if(n == 0){
            cnt++;
            return;
        }

        if(n < 0) return;

        find(n-1);
        find(n-2);
        find(n-3);
    }

    void out(){
        cout << cnt << '\n';
    }
};

int main(){
    int T;
    cin >> T;
    int a;

    while(T--){
        cin >> a;
        Sum s;
        s.find(a);
        s.out();
    }

    return 0;
}