#include <iostream>
#include <cmath>

using namespace std;

double lcm(double a, double b = 9.0)
{
  double gcd = 1.0;
  for (int i = 1; i <= a && i <= b; i++)
  {
    if (static_cast<int>(a) % i == 0 && static_cast<int>(b) % i == 0)
    {
      gcd = i;
    }
  }
  return (a * b) / gcd;
}

int main()
{
  cout << "Enter a number: ";
  double number;
  cin >> number;

  cout << "The square root of " << number << " is " << sqrt(number) << endl; // from standard library
  double result = lcm(number, 15);                                           // from user-defined function
  cout << "The lcm of " << number << " and 9.0 is " << result << endl;

  return 0;
}