#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Node{
    int value;
    Node* prev;
    Node* next;
};

struct Deque{
    Node* front;
    Node* back;
    int size;

    Deque(){
        front = nullptr;
        back = nullptr;
        size = 0;
    }

    void push_front(int X){
        Node* node = new Node{X, nullptr, front};
        if(front) front->prev = node;
        front = node;
        if(!back) back = node;
        size++;
    }

    void push_back(int X){
        Node* node = new Node{X, back, nullptr};
        if(back) back->next = node;
        back = node;
        if(!front) front = node;
        size++;
    }

    int pop_front(){
        int N;
        if(!front){
            return -1;
        }else{
            Node* temp = front;
            front = front->next;
            if(front) front->prev = nullptr;
            else back = nullptr;
            N = temp->value;
            delete temp;
            size--;
            return N;
        }
    }

    int pop_back(){
        int N;
        if(!front){
            return -1;
        }else{
            Node* temp = back;
            back = back->prev;
            if(back) back->next = nullptr;
            else front = nullptr;
            N = temp->value;
            delete temp;
            size--;
            return N;
        }
    }

    int Size(){
        return size;
    }

    int Empty(){
        return (!size) ?  1: 0;
    }

    int Front(){
        if(front){
            return front->value;
        }else{
            return -1;
        }
    }

    int Back(){
        if(back){
            return back->value;
        }else{
            return -1;
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int N;
    string S;
    ostringstream out;

    Deque D;

    while(T--){
        cin >> S;
        switch(S[0]){
            case 'p':
                switch(S[1]){
                    case 'u':
                        switch(S[5]){
                            case 'f':
                                cin >> N;
                                D.push_front(N);    
                                break;                          
                            case 'b':
                                cin >> N;
                                D.push_back(N);
                                break;
                        }
                        break;
                    case 'o':
                        switch(S[4]){
                            case 'f':
                                out << to_string(D.pop_front()) << "\n";
                                break;
                            case 'b':
                                out << to_string(D.pop_back()) << "\n";
                                break;
                        }
                        break;
                }
                break;
            case 's':
                out << to_string(D.Size()) << "\n";
                break;
            case 'e':
                out << to_string(D.Empty()) << "\n";
                break;
            case 'f':
                out << to_string(D.Front()) << "\n";
                break;
            case 'b':
                out << to_string(D.Back()) << "\n";
                break;
        }
    }
    cout << out.str();

    return 0;
}