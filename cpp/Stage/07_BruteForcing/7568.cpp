#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<int,int> > v(N);
    vector<int> order(N, 1);

    for(int i = 0; i<N; i++){
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(a,b);
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(v[j].first > v[i].first && v[j].second > v[i].second){
                order[i]++;
            }
        }
    }

    for(int i = 0; i<N; i++){
        cout << order[i] << " ";
    }

    return 0;
}