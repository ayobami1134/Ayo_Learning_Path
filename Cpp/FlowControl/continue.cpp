#include <iostream>

using namespace std;

int main() {
    int a = 100;
    int b = 3;

    cout << "Multiples of 3 that are even: ";
    while (b < a) {
        if (b % 2 != 0) {
            b += 3;
            continue;
        }
        cout << b << " ";
        b += 3;
    }
    cout << endl;

    return 0;
}