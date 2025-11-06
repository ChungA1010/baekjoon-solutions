#include <iostream>
using namespace std;

void howPay(){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    vector<pair<int,int>> Counseling(T);

    for(int i = 0; i<T; i++){
        int date, pay;
        cin >> date >> pay;
        Counseling[i] = {date, pay};        
    }



    return 0;
}