#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v;
    int back = 0;

    for(int i = 0 ; i< N; i++){
        string s;
        cin >> s;
        if(s == "push"){
            int a;
            cin >> a;
            v.push_back(a);
            back++;
        }else if(s == "pop"){
            if(v.size() == 0){
                cout << -1;
            }else{
                cout << v[0];
                if(v.size() == 1){
                    v.resize(0);0
                }else{
                    for(int i = 0; i<v.size()-1; i++){
                        v[i] = v[i+1];
                        v.resize(v.size()-1);
                    }
                }
                back--;
            }
        }else if(s == "size"){
            cout << v.size();
        }else if(s == "empty"){
            if(v.size() == 0){
                cout << 1;
            }else {
                cout << 0;
            }
        }else if(s == "front"){
            cout << v[0];
        }else if(s == "back"){
            cout << v[back - 1];
        }
    }

    return 0;
}