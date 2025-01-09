#include <iostream>
using namespace std;
int main () {
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key : ";
    cin>>key;

    bool flag = false; // false means absent
      for (int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            flag = true; // True means present
            cout<<key<<" exists at index "<<i;
            break;
        }
    }

    if(flag == false)
    {
        cout<<key<<" does not exists!";
    }


}