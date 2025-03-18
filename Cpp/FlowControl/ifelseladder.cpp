#include <iostream>

using namespace std;  

void test0() {
    char ch;
    cout << "Enter a character: ";
    cin.ignore();
    ch = cin.get();

    if (ch >= '0' && ch <= '9')
        cout << ch << " is a number." << endl;
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an upper case alphabet." << endl;
    if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a lower case alphabet." << endl;
    if ((ch >= 0 && ch < '0') || (ch > '9' && ch < 'A') || (ch > 'Z' && ch < 'a') || (ch > 'z'))
        cout << ch << " is a special character." << endl;
}

void test1() {
    char ch;
    cout << "Enter a character: ";
    cin.ignore();
    ch = cin.get();

    if (ch >= '0' && ch <= '9')
        cout << ch << " is a number." << endl;
    else if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an upper case alphabet." << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a lower case alphabet." << endl;
    else
        cout << ch << " is a special character." << endl;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // true if number is less than 0
    if (number < 0) {
        cout << "You entered " << number << " and it is less than zero." << endl;
    }
    // true if number is greater than 0
    else if (number > 0) {
        cout << "You entered " << number << " and it is greater than zero." << endl;
    }
    // if both the above conditions are false
    else {
        cout << "You entered " << number << " and it is equal to zero." << endl;
    }

    test0();
    test1();
    cout << "The if statement is easy." << endl;

    return 0;
}