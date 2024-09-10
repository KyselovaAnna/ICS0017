#include <iostream>
using namespace std;
 
int main() {
 
    int year = 2000;
 
    // if a year is divisible by 4 and not divisible by 100
    // or year is divisible by 400, it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "Leap Year";
    }
 
    // all other remaining years are not a leap year
    else {
        cout << "Not a Leap Year";
    }
 
    return 0;
}
