/*

      * * * * *
      * * * * *
      * * * * *
      * * * * *
      * * * * *

*/
#include <iostream>
using namespace std;

void squarePattern(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= x; j++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return;
}
int main(){
    int a;
    cout<<"Enter number of rows : ";
    cin>>a;
    squarePattern(a);
}