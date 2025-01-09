#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> num = {1,2,5,9,7,3};

    cout<<"Vector initially : ";
    
    
    for(int val : num){
        cout << val <<" ";
    }
    cout<<endl;

    cout<<"Size initially : "<< num.size()<<endl;

    cout<<"Vector after push back : ";
    num.push_back(1);
    num.push_back(6);
    num.push_back(4);
    for(int val : num){
        cout << val <<" ";
    }
    cout<<endl;


    cout<<"Size after push back : "<< num.size()<<endl;
    num.pop_back();
    num.pop_back();


    cout<<"Vector after pop back : ";
    for(int val : num){
        cout << val <<" ";
    }
    cout<<endl;

    cout<<"Size after pop back : "<< num.size();
    

    return 0;
}