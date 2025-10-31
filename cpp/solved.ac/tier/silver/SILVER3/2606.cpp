#include <iostream>
#include <vector>
using namespace std;

struct Graph{
    int n;
    vector<vector<int>> adj;
    vector<bool> visited;
    int virus;

    Graph(int N){
        n = N;
        adj.resize(N + 1);
        visited.resize(N + 1, false);
        virus = 0;
    }

    void Connect(int a, int b){
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    void DFS(int node){
        visited[node] = true;

        for(int next : adj[node]){
            if(visited[next] == false){
                virus++;
                DFS(next);
            }
        }
    }
};

int main(){
    int C, T;
    cin >> C >> T;

    Graph G(C);
    int a, b;

    while(T--){
        cin >> a >> b;
        G.Connect(a, b);
    }
    G.DFS(1);
    cout << G.virus << '\n';

    return 0;
}