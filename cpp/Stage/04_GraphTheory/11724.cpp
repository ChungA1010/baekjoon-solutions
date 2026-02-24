#include <iostream>
#include <vector>
using namespace std;

class Graph{
private:
    int size;
    vector<vector<int>> adj;

    void dfs(int u, vector<bool>& vis){
        vis[u] = true;
        for(int v : adj[u]){
            if(!vis[v]) dfs(v, vis);
        }
    }

public:
    Graph(int n) : size(n), adj(n) {}

    void makeEdge(int a, int b){
        --a; --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int connectionCount(){
        vector<bool> vis(size, false);
        int count = 0;
        for(int i = 0; i<size; i++){
            if(!vis[i]){
                count++;
                dfs(i, vis);
            }
        }
        return count;
    }

};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    Graph graph(N);
    for(int i = 0; i<M; i++){
        int a, b;
        cin >> a >> b;
        graph.makeEdge(a, b);
    }

    cout << graph.connectionCount();

    return 0;
}