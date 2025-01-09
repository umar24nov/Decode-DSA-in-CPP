#include <iostream>
using namespace std;
// int maze(int sr, int sc, int er, int ec) {
//     // Base case
//     if(sr > er || sc > ec) return 0;
//     if(sr == er && sc  == ec) return 1;


//     int rightWays = maze(sr, sc+1, er, ec);
//     int downWays = maze(sr+1, sc, er, ec);
//     int totalWays = rightWays + downWays;
//     return totalWays;
// }

int maze2(int row, int col) {
    // Base case
    if(row < 1 || col < 1) return 0;
    if(row == 1 && col == 1) return 1;


    int rightWays = maze2(row,col - 1); // Right
    int downWays = maze2(row - 1,col); // Down
    int totalWays = rightWays + downWays;
    return totalWays;
}

void printPath(int sr, int sc, int er, int ec, string s) {
    // Base case
    if(sr > er || sc > ec) return;
    if(sr == er && sc  == ec) { // destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc+1, er, ec, s+'R'); // right
    printPath(sr+1, sc, er, ec,s+'D'); // down
}
int main() {
    // cout<<"Answer : "<<maze(1,1,3,3)<<endl;
    // printPath(1,1,3,3,"");
    cout<<maze2(3,4);
}