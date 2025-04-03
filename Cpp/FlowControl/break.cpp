#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int b = 10;

    cout << "Multiples of 10: ";
    do {
        cout << b << " ";
        b += 10;
        if (b == 50) {
            break;
        }
    } while (b < a);
    cout << endl;

    return 0;
}