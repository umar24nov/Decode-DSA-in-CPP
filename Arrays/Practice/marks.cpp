#include <iostream>
using namespace std;
int main (){
    int marks[] = {97,34,89,32,27,78,90};
    int n = sizeof(marks)/sizeof(marks[0]);
    cout<<"The roll numbers of the students who have marks less than 35 are as folows : ";
    for(int i = 0; i < n; i++){
        if(marks[i] < 35){
            cout<<i<<" ";
        }
    }
    return 0;
}