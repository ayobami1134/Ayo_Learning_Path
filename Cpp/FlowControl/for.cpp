#include <iostream>

using namespace std;

int main()
{
    int num = 100;
    int sum = 0;

    for (int i = num; i > 25; i--)
    {
        sum += i;
    }

    cout << "Sum of numbers from 100 to 26 is: " << sum << endl;

    return 0;
}