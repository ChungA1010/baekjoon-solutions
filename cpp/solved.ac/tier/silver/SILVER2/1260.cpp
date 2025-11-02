#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Node {
    vector<int> edge;
};

struct Graph {
    vector<Node*> node;
    vector<bool> visited;

    Graph(int n) {
        node.resize(n);
        visited.resize(n, false);
        for (int i = 0; i < n; i++)
            node[i] = new Node();
    }

    void Connect(int x, int y) {
        node[x]->edge.push_back(y);
        node[y]->edge.push_back(x);
        sort(node[x]->edge.begin(), node[x]->edge.end());
        sort(node[y]->edge.begin(), node[y]->edge.end());
    }

    void DFS(int v) {
        visited[v] = true;
        cout << v << " ";
        for (int next : node[v]->edge)
            if (!visited[next])
                DFS(next);
    }

    void BFS(int v) {
        queue<int> q;
        visited.assign(node.size(), false);
        q.push(v);
        visited[v] = true;

        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            cout << cur << " ";
            for (int next : node[cur]->edge) {
                if (!visited[next]) {
                    visited[next] = true;
                    q.push(next);
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, V;
    cin >> N >> M >> V;
    Graph G(N + 1);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G.Connect(a, b);
    }

    G.DFS(V);
    cout << "\n";
    G.BFS(V);
    cout << "\n";
}
