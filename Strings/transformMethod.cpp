#include <iostream>
#include <string>
#include <algorithm> // Required for transform()
using namespace std;

int main() {
    string str = "MOHMMAD UMAR!";

    // Convert each character to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << "String In Lowercase: "<< str << endl;
    return 0;
}
