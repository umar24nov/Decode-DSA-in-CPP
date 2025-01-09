#include <iostream>
using namespace std;

// Using parameterized
void sum1toN(int sum, int n) {
    if ( n== 0) {
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum + n, n - 1);

}

// Using return type
int sum2(int n) {
    if(n == 0) return 0;
    return n + sum2(n - 1);
}
int main () {
    sum1toN(0,20);
    cout<<sum2(20);
}