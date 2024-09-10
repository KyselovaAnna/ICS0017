#include <iostream>
using namespace std;

int main() {

    // get integer input from the user
    int n;
    cin >> n;

    // create product variable
    int product;

    // create multiplication table from 6 to 9
    for (int i = 6; i <= 9; i++) {
        product = n * i;
        cout << n << " * " << i << " = " << product << endl;
    }

    return 0;
