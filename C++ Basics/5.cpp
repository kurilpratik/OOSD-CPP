// Function overloading in C++

#include <iostream>
using namespace std;

double add (double x, double y) {
    return x + y;
}

int add (int x, int y) {
    return x + y;
}

int main() {
    cout<<add(6.9,3.14);
    cout<<"\n";
    cout<<add(34,35);
    return 0;
}