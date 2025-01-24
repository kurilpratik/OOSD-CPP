// Return by reference
// Return by reference allows a function to return a reference to a variable instead of a copy of its value. This can be used to directly access or modify the original variable that the reference points to.

#include <iostream>
using namespace std;

int& getMax(int &a, int &b) {
    return (a>b) ? a : b;
}

int main() {
    int x=10, y=20;
    cout<< "Before: x = " << x << ", y = " << y << endl;
    getMax(x,y) = 30;
    cout<< "Before: x = " << x << ", y = " << y << endl;
    return 0;
}