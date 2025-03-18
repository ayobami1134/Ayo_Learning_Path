#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // true if number is less than 0
    if (number < 0) {
        cout << "You entered " << number << " and it is less than zero." << endl;
    }
    // false if number is less than 0
    else {
        cout << "You entered " << number << " and it is greater than or equal to zero." << endl;
    }
    cout << "The if statement is easy." << endl;

    return 0;
}