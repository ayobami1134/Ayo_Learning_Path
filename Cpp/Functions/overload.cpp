#include <iostream>
#include <iomanip>

using namespace std;

void printSum(int a, int b);        // Function prototype
void printSum(int a, int b, int c); // Function prototype
// int printSum(int a, int b);      // Invalid function overload
void printSum(int a, float b);   // Function prototype
void printSum(float a, float b); // Function prototype

int main()
{
  int a = 5, b = 7, c = 10;
  float x = 5.5, y = 7.5;
  printSum(a, b);
  printSum(a, b, c);
  printSum(a, x);
  printSum(x, y);
  // printSum(x, b);
  return 0;
}

// Function definition
void printSum(int a, int b)
{
  // This function takes two integers as parameters and prints their sum
  int sum = a + b;
  cout << "The sum of " << a << " and " << b << ": " << sum << endl;
}

void printSum(int a, int b, int c)
{
  // This function takes three integers as parameters and prints their sum
  int sum = a + b + c;
  cout << "The sum of " << a << ", " << b << " and " << c << ": " << sum << endl;
}

void printSum(int a, float b)
{
  // This function takes an integer and a float as parameters and prints their sum
  float sum = a + b;
  cout << "The sum of " << a << " and " << fixed << setprecision(2) << b << ": " << sum << endl;
}

void printSum(float a, float b)
{
  // This function takes two floats as parameters and prints their sum
  float sum = a + b;
  cout << "The sum of " << fixed << setprecision(2) << a << " and " << b << ": " << sum << endl;
}