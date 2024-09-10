#include <iostream>
using namespace std;
 
int main() {
 
    int number = 9;
    int product;
 
    // iterate a loop from 1 to 5
    for (int i = 1; i <= 5; ++i) {
 
        // compute the product in each iteration of the loop
        product = number * i;
        cout << number << " * " << i;
        cout << " = " << product << endl;
    }
 
    return 0;
}
