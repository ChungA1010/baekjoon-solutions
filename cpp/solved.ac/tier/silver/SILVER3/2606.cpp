#include <iostream>
#include <vector>
using namespace std;

struct Node;

struct Edge{
    Node* edge1;
    Node* edge2;
};

struct Node{
    int value;
    vector<Edge*> edges;
};

struct Graph{
    vector<Node> nodes;

    Graph(int N){
        nodes.resize(N);
        for(int i = 0; i<N; i++){
            nodes[i].value = i+1;
        }
    }

    void Connect(int n1, int n2){
        Edge* e = new Edge;
        e->edge1 = &nodes[n1];
        e->edge2 = &nodes[n2];
        nodes[n1].edges.push_back(e);
        nodes[n2].edges.push_back(e);
    }

    void find(int n){
        if()
    }
};

int main(){
    int C, E;
    cin >> C >> E;


    int a, b;

    while(E--){
        cin >> a >> b;
    }

    return 0;
}