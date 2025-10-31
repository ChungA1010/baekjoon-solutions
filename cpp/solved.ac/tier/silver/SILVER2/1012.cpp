#include <iostream>
#include <vector>
using namespace std;

struct Node{
    bool value;
    Node* up;
    Node* down;
    Node* left;
    Node* right;
};

struct Table{
    vector<vector<Node*>> grid;
    vector<vector<bool>> visited;
    int cnt;
    int M, N;
    
    Table(int m, int n){
        M = m;
        N = n;
        grid.resize(M, vector<Node*>(N, nullptr));
        visited.resize(M, vector<bool>(N, false));
        cnt = 0;
        Make();
    }

    ~Table() {
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                delete grid[i][j];
            }
        }
    }

    void Make(){
        for(int i = 0; i< M; i++){
            for(int j = 0; j<N; j++){
                Node* node = new Node;
                node->value = false;
                grid[i][j] = node;

                if(j > 0){
                    grid[i][j-1]->right = grid[i][j];
                    grid[i][j]->left = grid[i][j-1];
                }

                if(i > 0){
                    grid[i-1][j]->down = grid[i][j];
                    grid[i][j]->up = grid[i-1][j];
                }
            }
        }
    }

    void plant(int X, int Y){
        grid[Y][X]->value = true;
    }

    void dfs(int i, int j){
        if (i < 0 || i >= M || j < 0 || j >= N) return; 
        if (visited[i][j]) return;
        if (!grid[i][j]->value) return;

        visited[i][j] = true;

        dfs(i-1, j); 
        dfs(i+1, j); 
        dfs(i, j-1); 
        dfs(i, j+1); 
    }

    void count(){
        cnt = 0;

        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                if(grid[i][j]->value && !visited[i][j]){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
    }

    int earthworm(){
        return cnt;
    }

};

int main(){
    int T;
    cin >> T;
    int X, Y, M, N, K;

    while(T--){
        cin >> M >> N >> K;
        Table table(M, N);
        while(K--){
            cin >> X >> Y;
            table.plant(Y, X);
        }
        table.count();
        cout << table.earthworm() << '\n';
    }

    return 0;
}