#include <iostream>
#include <vector>
using namespace std;

class Queue{
public:
    int front;
    int back;
    vector<int> v;
    Queue(){
        front = back = -1;  
    }

    void enqueue(int val){
        if(isEmpty()){
            front = 0;
        }
        v.push_back(val);
        back++;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is already empty!"<<endl;
        } 
        else if (front == back){
            front = back = -1;
            v.clear();
        }
        else front++;
    }

    int getFront(){
        if(isEmpty()) return -1;
        return v[front];
        }

    bool isEmpty(){
        return front == -1;
        }

        void display(){
            if(isEmpty()){
                cout<<"Queue is Empty!"<<endl;
                return;
            }
            for(int i = front; i <= back; i++){
                cout<< v[i] <<" "; 
            }
        cout<<endl;
    }
};

int main(){
    Queue qu;
    cout<<"Is the queue empty: "<<boolalpha<<qu.isEmpty()<<endl;

    qu.enqueue(50);
    qu.enqueue(60);
    qu.enqueue(70);
    qu.enqueue(80);
    cout<<"Contents of queque: ";
    qu.display();
    qu.dequeue();
    cout<<"Queue after one dequeue: ";
    qu.display();
    qu.enqueue(90);
    cout<<"Queue after enqueuing 90 : ";
    qu.display();
    return 0; 
}