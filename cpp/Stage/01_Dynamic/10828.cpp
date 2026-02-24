#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack{
private:
    vector<int> s;
    int temp;

public:
    void push(int a){
        s.push_back(a);
    }

    int pop(){
        if(!this->empty()){
            temp = s.back();
            s.pop_back();
            return temp;
        }
        return -1;
    }

    int size(){
        temp = s.size();
        return temp;
    }

    int empty(){
        if(this->size() == 0) temp = 1;
        else temp = 0;
        return temp;
    }

    int top(){
    if(!this->empty()){
            return s.back();
        }else {
            return -1;
        }
    }
};

int main(){
    Stack stack = Stack();
    int t;
    cin >> t;
    string s;
    int n;

    while(t--){
        cin >> s;
        if(s == "push"){
            cin >> n;
            stack.push(n);
        }else if( s == "pop"){
            cout << stack.pop() << "\n";
        }else if(s == "size"){
            cout << stack.size() << "\n";
        }else if(s == "empty"){
            cout << stack.empty() << "\n";
        }else{
            cout << stack.top() << "\n";
        }
    }

    return 0;
}