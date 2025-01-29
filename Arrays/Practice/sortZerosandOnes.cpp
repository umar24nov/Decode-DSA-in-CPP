#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    int numOfZeros = 0;
    int numOfOnes = 0;

    cout<<"Array before sorting O's and 1's : ";

    for(int num : v){
        cout<<num<<" ";
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) numOfZeros++;
        else numOfOnes++;
    }
    
    cout<<endl;
    cout<<"Total number of Zeros : "<<numOfZeros<<endl;
    cout<<"Total number of Ones : "<<numOfOnes<<endl;

    for(int i = 0; i < v.size(); i++){
        if(i < numOfZeros) v[i] = 0;
        else v[i] = 1;
    }

    cout<<"Array after sorting O's and 1's : ";

    for(int num : v){
        cout<<num<<" ";
    }

    
    return 0;
}