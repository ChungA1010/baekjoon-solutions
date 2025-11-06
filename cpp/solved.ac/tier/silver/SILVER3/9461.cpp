#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<long long> wave(101, 0);
    wave[1] = 1; wave[2] = 1; wave[3] = 1; wave[4] = 2; wave[5] = 2;
        
    
    for(int i = 6; i <= 100; i++){
        wave[i] = (wave[i-1] + wave[i-5]);
    }
    
    while(t--){
        int a;
        cin >> a;
        cout << wave[a] << '\n';
    }
    

    return 0;
}