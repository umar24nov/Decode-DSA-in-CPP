#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);

    int numOfZeros = 0;
    int numOfOnes = 0;
    int numOfTwos = 0;

    cout<<"Array before sorting O's and 1's : ";

    for(int num : v){
        cout<<num<<" ";
    }

    cout<<endl;

    for(int num : v){
        if(num == 0) numOfZeros++;
        else if(num == 1) numOfOnes++;
        else numOfTwos++;
    }
    
    cout<<"Total number of Zeros : "<<numOfZeros<<endl;
    cout<<"Total number of Ones : "<<numOfOnes<<endl;
    cout<<"Total number of Twos : "<<numOfTwos<<endl;

    for(int i = 0; i < v.size(); i++){
        if(i < numOfZeros) v[i] = 0;
        else if (i < (numOfZeros + numOfOnes)) v[i] = 1;
        else v[i] = 2;
    }

    cout<<"Array after sorting O's, 1's and 2's : ";

    for(int num : v){
        cout<<num<<" ";
    }

    
    return 0;
}