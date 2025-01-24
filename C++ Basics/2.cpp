// Enumerators or Enums in C++

#include <iostream>
using namespace std;

enum Days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() {
    Days today = Saturday;
    cout<<today;
    //Days tomorrow = 7; //a value of type "int" cannot be used to initialize an entity of type "Days"

    // USECASE
    switch (today)
    {
    case Monday:
        cout<<"Today is Monday";
        break;
    case Tuesday:
        cout<<"Today is Tuesday";
        break;
    case Wednesday:
        cout<<"Today is Wedbesday";
        break;
    case Thursday:
        cout<<"Today is Thursday";
        break;
    case Friday:
        cout<<"Today is Friday";
        break;
    case Saturday:
        cout<<"Today is Saturday";
        break;
    case Sunday:
        cout<<"Today is Sunday";
        break;
    
    default:
        break;
    }
    return 0;
}