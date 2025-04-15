#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void printSum(int a, int b);
void printAvg(float a, int b);

int main()
{
  // Function call
  printSum(5, 10);
  // printAvg(5); // too few arguments (commented out to avoid error)
  printAvg(5.7, 10.8);
  return 0;
}

// Function definition
void printSum(int a, int b)
{ // Function with parameters
  // This function takes two integers as parameters and prints their sum
  int sum = a + b;
  cout << "The sum of " << a << " and " << b << " is " << sum << endl;
}

void printAvg(float a, int b)
{ // Function with parameters
  // This function takes a float and an integer as parameters and prints their average
  float avg = (a + b) / 2.0;
  cout << "The average of " << fixed << setprecision(2) << a
       << " and " << b << " is " << avg << endl;
}