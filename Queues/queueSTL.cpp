#include <iostream>
#include <queue>
using namespace std;

void display(queue<int> qu){
    while(! qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    cout<<"Contents of Queue : ";
    display(qu);
    cout<<"Queue after one pop : ";
    qu.pop();
    display(qu);
    cout<<"Queue after two pop : ";
    qu.pop();
    display(qu);
    cout<<"Front of the queue at present : "<<qu.front()<<endl;
    return 0;
}