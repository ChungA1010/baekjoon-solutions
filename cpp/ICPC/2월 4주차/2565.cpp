#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(501, 0);
    vector<int> B(501, 0);

    for(int i = 0; i<N; i++){
        int a, b;
        cin >> a >> b;

        A[a] = b;
        B[b] = a;

        
    }


    return 0;
}