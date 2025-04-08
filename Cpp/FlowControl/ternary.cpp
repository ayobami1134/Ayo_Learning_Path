#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	// Using ternary operator to find the greater of two numbers
	(a > b) ? cout << "The greater number is: " << a << endl : (a != b) ? cout << "The greater number is: " << b << endl
																																			: cout << "The two numbers are equal: " << a << " = " << b << endl;
	return 0;
}