#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> tri(3);

    cin >> tri[0] >> tri[1] >> tri[2];

    sort(tri.begin(), tri.end());

    if(tri[2] >= (tri[0] + tri[1])){
        tri[2] = tri[0] + tri[1] - 1;
    }
    
    cout << tri[0] + tri[1] + tri[2];

    return 0;
}