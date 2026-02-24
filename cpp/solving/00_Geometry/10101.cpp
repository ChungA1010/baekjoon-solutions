#include <iostream>
using namespace std;

int main(){
    int angle[3];
    int sum = 0;
    int x = 0;

    for(int i = 0; i<3; i++){
        cin >> angle[i];
        sum += angle[i];
    }

    if(sum != 180){
        cout << "Error";
    }else if(angle[0] == 60 && angle[1] == 60){
        cout << "Equilateral";
    }else if(angle[0] == angle[1] || angle[1] == angle[2] || angle[2] == angle[0]){
        cout << "Isosceles";
    }else{
        cout << "Scalene";
    }

    return 0;
}