#include <iostream>
#include <vector>
using namespace std;
class Stack{
public:
    vector<int> v;

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if (v.size() == 0){
            cout << "Stack Underflow!";
            return;
        }
        v.pop_back();
    }

    int top(){
        if (v.empty()){ // (v.empty() means v.size() == 0)
            cout << "Stack Is Empty!";
            return -1;
        }
        return v.back();
    }

    int size(){
        return v.size();
    }

    void display(){
        if (v.empty()){
            cout << "Stack Is Empty!" << endl;
            return;
        }
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.size();
}