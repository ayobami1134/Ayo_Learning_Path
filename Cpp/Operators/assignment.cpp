#include <iostream>

using namespace std;

int main() {
    int a = 21;
    int c;

    c = a;
    cout << "Line 1 - =  Operator Example, Value of c = " << c << endl;

    c += a; // c = c + a
    cout << "Line 2 - += Operator Example, Value of c = " << c << endl;

    c -= a; // c = c - a
    cout << "Line 3 - -= Operator Example, Value of c = " << c << endl;

    c *= a; // c = c * a
    cout << "Line 4 - *= Operator Example, Value of c = " << c << endl;

    c /= a; // c = c / a
    cout << "Line 5 - /= Operator Example, Value of c = " << c << endl;

    c = 200;
    c %= a; // c = c % a
    cout << "Line 6 - %= Operator Example, Value of c = " << c << endl;

    c <<= 2; // c = c << 2
    cout << "Line 7 - <<= Operator Example, Value of c = " << c << endl;

    c >>= 2; // c = c >> 2
    cout << "Line 8 - >>= Operator Example, Value of c = " << c << endl;

    c &= 2; // c = c & 2
    cout << "Line 9 - &= Operator Example, Value of c = " << c << endl;

    c ^= 2; // c = c ^ 2
    cout << "Line 10 - ^= Operator Example, Value of c = " << c << endl;

    c |= 2; // c = c | 2
    cout << "Line 11 - |= Operator Example, Value of c = " << c << endl;

    return 0;
}