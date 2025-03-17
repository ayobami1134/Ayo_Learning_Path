#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 20;
    bool c = true;
    bool d = false;
    bool e = 4;
    bool f = 0;

    if (c && d) {
        cout << "Line 0 - Condition is true" << endl;
    } else {
        cout << "Line 0 - Condition is not true" << endl;
    }

    if (c || d) {
        cout << "Line 00 - Condition is true" << endl;
    } else {
        cout << "Line 00 - Condition is not true" << endl;
    }

    if (e && d) {
        cout << "Line 000 - Condition is true" << endl;
    } else {
        cout << "Line 000 - Condition is not true" << endl;
    }

    if (f || d) {
        cout << "Line 0000 - Condition is true" << endl;
    } else {
        cout << "Line 0000 - Condition is not true" << endl;
    }

    if (a && b) {
        cout << "Line 1 - Condition is true" << endl;
    }

    if (a || b) {
        cout << "Line 2 - Condition is true" << endl;
    }

    /* Let's change the values of a and b */
    a = 0;
    b = 10;

    if (a && b) {
        cout << "Line 3 - Condition is true" << endl;
    } else {
        cout << "Line 3 - Condition is not true" << endl;
    }

    if (a || b) {
        cout << "Line 4 - Condition is true" << endl;
    } else {
        cout << "Line 4 - Condition is not true" << endl;
    }

    if (!((a && b) || (a < b))) {
        cout << "Line 5 - Condition is true" << endl;
    }

    return 0;
}