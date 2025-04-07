#include <iostream>
#include <limits>

using namespace std;

int main()
{
    char op;
    double num1, num2, result;
    bool valid = false;

    while (true)
    {

        cout << "Enter a valid number: ";
        cin >> num1;
        if (cin.fail())
        {
            cin.clear();                                         // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Error: Invalid number!" << endl;
        }
        else
        {
            break;
        }
    }
    while (true)
    {
        cout << "Enter another valid number: ";
        cin >> num2;
        if (cin.fail())
        {
            cin.clear();                                         // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Error: Invalid number!" << endl;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        switch (op)
        {
        case 43:
            valid = true;
            result = num1 + num2;
            break;
        case 45:
            valid = true;
            result = num1 - num2;
            break;
        case 42:
            valid = true;
            result = num1 * num2;
            break;
        case 47:
            valid = true;
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;

        default:
            cout << "Error: Invalid operator!" << endl;
            cin.clear();                                         // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        }
        if (valid)
        {
            break;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
