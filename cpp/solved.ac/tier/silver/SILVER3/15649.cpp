#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> v;
bool visited[9];

void dfs(int depth){
    if(depth == M){
        for(int j : v){
            cout << j << " ";
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            v.push_back(i);
            dfs(depth + 1);
            v.pop_back();
            visited[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    cin >> N >> M;
    dfs(0);

    return 0;
}