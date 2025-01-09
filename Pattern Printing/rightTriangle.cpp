/*

Pattern :  
    *  
    * *  
    * * *  
    * * * * 
*/

#include <iostream>
using namespace std;

void rightTriangle(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= i; j++){ 
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
    rightTriangle(a);
}