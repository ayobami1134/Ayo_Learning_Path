#include <iostream>

using namespace std;

int main()
{
    float num, avg, sum = 0;
    int count = 0;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 0)
        {
            goto pos1;
        }
        sum += num;
        count++;
    }

pos1:
    if (count > 0)
    {
        avg = sum / count;
        cout << "Average of entered numbers: " << avg << endl;
        cout << "Sum of entered numbers: " << sum << endl;
    }
    else
    {
        cout << "No positive numbers were entered." << endl;
    }

    return 0;
}