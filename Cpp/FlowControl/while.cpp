#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    int b = 3;

    cout << "Multiples of 3: ";
    while (b < a)
    {
        cout << b << " ";
        b += 3;
    }
    cout << endl;

    return 0;
}