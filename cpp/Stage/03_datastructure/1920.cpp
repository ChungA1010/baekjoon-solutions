#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> num(N);

    for(int i = 0; i<N; i++){
        cin >> num[i];
    }
    sort(num.begin(), num.end());

    int M;
    cin >> M;

    string s;
    s.reserve(M*2);

    int low, high;
    while(M--){
        int a;
        cin >> a;
        low = 0;
        high = num.size();
        bool found = false;

        while(high > low){
            int mid = (low + high)/2;
            if(num[mid] == a){
                found = true;
                break;
            }else if(num[mid] > a){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        s += (found? "1\n" : "0\n");
    }

    cout << s;

    return 0;
}