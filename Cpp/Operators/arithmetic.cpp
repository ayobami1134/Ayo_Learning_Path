#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 20, c = 0;

    c = a + b;
    cout << "a + b = " << c << endl;

    c = a - b;
    cout << "a - b = " << c << endl;

    c = a * b;
    cout << "a * b = " << c << endl;

    c = b / a;
    cout << "b / a = " << c << endl;

    c = b % a;
    cout << "b % a = " << c << endl;

    // increment and decrement operators
    cout << "\nIncrement and decrement operators: postfix" << endl;
    c = a++;
    cout << "a++ = " << c << endl;
    cout << "a = " << a << endl;

    c = a--;
    cout << "a-- = " << c << endl;
    cout << "a = " << a << endl;

    cout << "\nIncrement and decrement operators: prefix" << endl;
    c = ++a;
    cout << "++a = " << c << endl;
    cout << "a = " << a << endl;

    c = --a;
    cout << "--a = " << c << endl;
    cout << "a = " << a << endl;

    return 0;
}