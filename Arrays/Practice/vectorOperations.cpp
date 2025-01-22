#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);

    for(int num : v){
        cout<<num<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();

    for(int num : v){
        cout<<num<<" ";
    }

    return 0;
}