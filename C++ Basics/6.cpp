// Call by Reference
// Try running without the & operator

#include <iostream>
using namespace std;

int increment (int &value) {
    value++;
    return value;
}

int main(){
    int num = 10;
    cout<<"Before: "<<num<<endl;
    increment(num);
    cout<<"After: "<<num<<endl;
    return 0;
}