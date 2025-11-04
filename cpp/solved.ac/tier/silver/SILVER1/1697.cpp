#include <iostream>
#include <queue>
using namespace std;

struct hideSeek{
    vector<bool> visited;
    queue<int> q;
    int S, B;
    int time = 0;

    hideSeek(int s, int b){
        visited.resize(100001, false);
        S = s;
        B = b;
    }

    void find(){
        q.push(S);
        visited[S] = true;

        while(!q.empty()){
            int roop = q.size();
            for(int i = 0; i<roop; i++){
                int cnum = q.front();
                q.pop();
                
                if(cnum == B) return;

                int next[3] = {cnum + 1, cnum - 1, 2 * cnum};

                for(int j : next){
                    if (j >= 0 && j <= 100000 && !visited[j]) {
                        visited[j] = true;
                        q.push(j);
                    }
                }
            }
            time++;
        }
    }

    void howMany(){
        cout << time;
    }

};

int main(){
    int S, B;
    cin >> S >> B;

    hideSeek T(S, B);
    T.find();
    T.howMany();

    return 0;
}