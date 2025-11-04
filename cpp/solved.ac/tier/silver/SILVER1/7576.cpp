#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

struct Tomato{
    vector<vector<int>> tomato;
    queue<pair<int, int>> q;
    int M, N;
    int days = 0;

    Tomato(int m, int n){
        tomato.resize(m, vector<int>(n, 0));
        M = m, N = n;
    }

    void plant(){
        int a;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                cin >> a;
                tomato[i][j] = a;
                if(a == 1) q.push({i, j});
            }
        }
    }

    void deli(){
        while(!q.empty()){
            int roop = q.size();
            bool changed = false;

            for(int i = 0; i<roop; i++){
                auto[x, y] = q.front(); q.pop();
                for(int j = 0; j<4; j++){
                    int nx = x + dx[j];
                    int ny = y + dy[j];
                    if(nx >= 0 && ny >= 0 && nx < M && ny < N && tomato[nx][ny] == 0){
                        tomato[nx][ny] = 1;
                        q.push({nx, ny});
                        changed = true;
                    }
                }
            }
            if(changed) days++;
        }        
        if(allRipe()){
            cout << days << '\n';
        }else{
            cout << -1 << '\n';
        }
    }

    bool allRipe(){
        for(int i = 0; i<M; i++){
            for(int j = 0; j<N; j++){
                if(tomato[i][j] == 0) return false;
            }
        }
        return true;
    }
};

int main(){
    int M, N;
    cin >> N >> M;
    Tomato t(M, N);
    t.plant();
    t.deli();

    return 0;
}