/*

Pattern :  

    1
    1 2
    1 2 3
    1 2 3 4

*/




#include <iostream>
using namespace std;

void numberTriangle(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= i; j++){ 
            cout<<j<<" ";
        }
    cout<<endl;
    }
    return;
}
int main(){
    int a;
    cout<<"Enter number of rows : ";
    cin>>a;
    numberTriangle(a);
}