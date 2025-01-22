#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(7);
    for(int num : v1){
        cout<<num<<" ";
    }
    cout<<endl;
    vector<int> v2(v1.size());
    for(int i = 0; i < v2.size(); i++){
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
    }

    for(int num : v2){
        cout<<num<<" ";
    }
    
    return 0;
}