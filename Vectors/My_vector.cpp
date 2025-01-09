#include <iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    // Default Constructor
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i = 0;i < size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = ele; // arr[size++] = ele;
        size++;
    }
    void print(){
        for(int i = 0;i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void remove(){
        if(size == 0){
            cot<<"Array is Empty!"<<endl; 
        }
        size--;
    }


    // Returning Index
    int get(int idx){
        if(size == 0){
            cot<<"Array is Empty!"<<endl;
            return -1;
        }
        if(idx >= size || idx < 0) {
        cout<<"Invalid Index!"<<endl;
        return -1;
        }

        return arr[idx]; 

    }

};

int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<" "<<endl;
    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<" "<<endl;
    v.add(15);
    v.print();
    cout<<v.size<<" "<<v.capacity<<" "<<endl;
    v.add(7);
    v.print();
    cout<<v.size<<" "<<v.capacity<<" "<<endl;
    v.add(9);
    v.print();
    cout<<v.size<<" "<<v.capacity<<" "<<endl<<endl;

    cout<<v.get(0)<<endl;
    cout<<v.get(1)<<endl;
    cout<<v.get(2)<<endl;
    cout<<v.get(3)<<endl;

}