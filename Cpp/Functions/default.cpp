#include <iostream>

using namespace std;

void printSum(int a, int b = 1);                     // Function prototype
void printAvg(int a, float b = 1.0, double c = 2.5); // Function prototype
// void printAvg(int a, float b = 1.0, double c); // Invalid Function prototype

int main()
{
  // Function call
  printSum(5);
  printSum(5, 10.8);
  printAvg(5);
  printAvg(1, 2.5);
  printAvg(10, 20.5, 30.5);
  return 0;
}

// Function definition
void printSum(int a, int b)
{ // Function with parameters
  // This function takes two integers as parameters and prints their sum
  int sum = a + b;
  cout << "The sum of " << a << " and " << b << " is " << sum << endl;
}

void printAvg(int a, float b, double c)
{ // Function with parameters
  // This function takes an integer, a float, and a double as parameters and prints their average
  double avg = (a + b + c) / 3.0;
  cout << "The average of " << a << ", " << b << ", and " << c << " is " << avg << endl;
}
