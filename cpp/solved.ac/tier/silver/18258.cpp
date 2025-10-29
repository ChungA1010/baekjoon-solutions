#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    static int q[2000000];  
    int front = 0, back = 0;

    string cmd;
    string out;        

    while (T--) {
        cin >> cmd;

        if (cmd[0] == 'p') { 
            if (cmd[1] == 'u') {  
                int x;
                cin >> x;
                q[back++] = x;
            } else {  
                if (front == back) out += "-1\n";
                else out += to_string(q[front++]) + '\n';
            }
        } 
        else if (cmd[0] == 's') {
            out += to_string(back - front) + '\n';
        } 
        else if (cmd[0] == 'e') {
            out += (front == back ? "1\n" : "0\n");
        } 
        else if (cmd[0] == 'f') {
            if (front == back) out += "-1\n";
            else out += to_string(q[front]) + '\n';
        } 
        else { 
            if (front == back) out += "-1\n";
            else out += to_string(q[back - 1]) + '\n';
        }
    }

    cout << out;
    return 0;
}
