#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    cout << "Enter target : ";
    cin >> x;

    int n;
    cout<<"Enter size of vector : ";
    cin>>n;

    vector<int> v;
    cout << "Enter vector elements : ";
    for (int i = 0; i < n; i++){
        int q;
        cin >> q;
        v.push_back(q);
    }
    cout<<"Vector elements are : ";
    for (int num : v){
        cout << num << " ";
    }
    cout<<endl;
    for(int i = 0; i < v.size()-1; i++) {
        for(int j = i + 1; j < v.size(); j++) {
           if(v[i] + v[j] == x){
                cout << "Indexes (" << i << "," << j << ") -> Elements (" << v[i] << "," << v[j] << ")" << endl;
           }
        }
    }
}
