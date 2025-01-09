/*

Pattern : 

      * * * * 
      * * * 
      * * 
      * 
      *
*/



#include <iostream>
using namespace std;

void invertedTriangle(int x){
    for(int i = 1; i <= x; i++){
        for(int j = i; j <= x; j++){ 
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
    invertedTriangle(a);
}