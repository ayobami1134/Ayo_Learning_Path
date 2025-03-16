#include <iostream>

using namespace std;

int main() {
    // comma operator
    int a, b = 20, c;

    a = 10;
    c = a + b;
    cout << "c = " << c << endl;

    // sizeof operator
    cout << "Size of c: " << sizeof(c) << " bytes" << endl;

    // address of operator
    cout << "Address of c: " << &c << endl;

    // tenary operator "? :" is a ternary operator which works as follows: condition ? expression1 : expression2;
    int x = 10, y = 20;
    int z = (x > y) ? x : y;
    cout << "Value of z: " << z << endl;

    // << and >> operators
    // cout << x; // output
    // cin >> x; // input

    // Member access operator
    // . and -> are member access operators

    return 0;
}

