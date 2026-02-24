#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int val;
    Node* n;
};

struct List{
    Node* root;
    Node* tail;

    List(){
        root = nullptr;
        tail = nullptr;
    }

    ~List(){
        while(root){
            Node* temp = root;
            root = root->n;
            delete temp;
        }
    }

    void makeList(int a){
        for(int i = 0; i<a; i++){
            Node* node = new Node();
            node->val = i + 1;
            if(root == nullptr){
                root = node;
                tail = node;
            }else {
                tail->n = node;
                tail = node;
            }
            node->n = nullptr;
        }
    }

    void removeList(){
        Node* temp;
        temp = root;
        root = root->n;
        if(root == nullptr) tail = nullptr;
        delete temp;
    }

    void changeList(){
        Node* temp = root;
        root = root->n;
        tail->n = temp;
        tail = temp;
        tail->n = nullptr;   
    }

    int result(){
        while(root->n != nullptr){
            removeList();
            if(!root || !root->n) break;
            changeList();
        }
        return root->val;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    List* list = new List();
    list->makeList(n);

    cout << list->result();

    delete list;

    return 0;
}