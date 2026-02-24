#include <iostream>
using namespace std;

int main(){
    int area[100][100] = {0};
    int n;
    int x, y;
    int sol = 0;

    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> x >> y;
        for(int j = x; j<x+10; j++){
            for(int k = y; k<y+10; k++){
                if(area[j][k] == 0){
                    area[j][k] = 1;
                    sol++;
                }
            }
        }
    }

    cout << sol;

    return 0;
}

