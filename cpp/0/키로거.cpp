#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--){
        list<char> l;
        auto t = l.begin();
        string s; cin >> s;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '<'){
                if(t != l.begin()){
                    t--;
                }
            }else if(s[i] == '>'){
                if(t != l.end()){
                    t++;
                }
            }else if(s[i] == '-'){
                if(t != l.begin()){
                    auto temp = t;
                    --temp;
                    l.erase(temp);
                }
            }else{
                l.insert(t,s[i]);
            }
        }
        
        for(char c : l) cout << c;
        cout << '\n';
    }

    return 0;
}