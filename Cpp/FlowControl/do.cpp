#include <iostream>
using namespace std;
int main() {
    int a = 100;
    int b = 10;

    cout << "Multiples of 10: ";
    do {
        cout << b << " ";
        b += 10;
    } while (b < a);
    cout << endl;

    return 0;
}