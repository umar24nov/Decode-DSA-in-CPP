/*

      * * * * *
      *       *
      *       *
      *       *
      * * * * *

*/
#include <iostream>
using namespace std;

void squarePattern(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= x; j++){
            if(i == 1 || i == x || j == 1 || j == x) cout<<"* ";
            else cout<<"  ";
        }
    cout<<endl;
    }
    return;
}
int main(){
    int a;
    cout<<"Enter number of rows : ";
    cin>>a;
    int b;
    squarePattern(a);
}