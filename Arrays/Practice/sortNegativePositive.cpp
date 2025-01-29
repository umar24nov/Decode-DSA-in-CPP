#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(-5);
    v.push_back(-3);

    int negative = 0;
    int positive = 0;

    cout<<"Array before sorting negatives and positives : ";

    for(int num : v){
        cout<<num<<" ";
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] < 0) negative++;
        else positive++;
    }
    
    cout<<endl;
    cout<<"Total number of negatives : "<<negative<<endl;
    cout<<"Total number of positives : "<<positive<<endl;

    int left = 0;
    int right = v.size() -1;
    while(left < right){
        while (v[left] < 0 && left < right) left++;
        while (v[right] >= 0 && left < right) right--;
        if (left < right) {
            swap(v[left], v[right]);
            left++;
            right--;
        }
    }

    cout<<"Array after sorting O's and 1's : ";

    for(int num : v){
        cout<<num<<" ";
    }

    
    return 0;
}