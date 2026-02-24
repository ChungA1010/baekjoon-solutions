#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int bag5 = n / 5;

    for(int i = 0; i<=bag5; i++){
        int five = bag5 - i;
        int temp = n - five * 5;
        
        if(temp % 3 == 0){
            int bag3 = temp / 3;
            cout << bag3 + five << '\n';
            return 0;
        }
    }

    cout << "-1" << '\n';

    return 0;
}