#include <iostream>
#include <vector>
using namespace std;

struct Robot{
    int x, y;
    int vec;

    Robot(){
        
    }

    void reRobot(int a, int b, int c){
        x = a; y = b; vec = c;
    }

    void RobotMove(){
        
    }

    int RobotX(){
        return x;
    }

    int RobotY(){
        return y;
    }

    int RobotVec(){
        return vec;
    }
};

struct Clean{
    vector<vector<int>> room;
    vector<vector<bool>> visited;
    int x, y;
    Robot r;
    int cnt = 0;

    Clean(int a, int b){
        x = a; y = b;
        room.resize(a, vector<int>(b));
        visited.resize(a, vector<bool>(b, false));
    }

    void getRobot(int a, int b, int c){
        r.reRobot(a, b, c);
    }

    void getRoom(){
        int a;
        for(int i = 0; i<x; i++){
            for(int j = 0; j<y; j++){
                cin >> a;
                room[i][j] = a;
                if(a == 1)
                    visited[i][j] = true;
                else visited[i][j] = false;
            }
        }
    }

    void CleanRoom(int i, int j){
        
    }

    void MoveRobot(){
        switch(r.RobotVec()){
            case 0:
                

            case 1:

            case 2:

            case 3:
        }
    }



};

int main(){
    int n, m;
    cin >> n >> m;

    Clean clean(n, m);

    int a, b, c;
    cin >> a >> b >> c;
    clean.getRobot(a, b, c);
    clean.getRoom();

    return 0;
}