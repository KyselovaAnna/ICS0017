#include <iostream>
using namespace std;
 
int main() {
 
    // the initial value of total is 0
    int total = 0;
    int number;
 
    // loop continues infinitely until it encounters the break statement
    while (1) {
        cout << "Enter a number: ";
        cin >> number;
 
        // if number is negative, don't add that number to total
        if (number < 0) {
            continue;
        }
 
        // if number is 0, terminate the loop
        if (number == 0) {
            break;
        }
 
        total = total + number;
    }
 
    cout << "Total: " << total;
 
    return 0;
}
