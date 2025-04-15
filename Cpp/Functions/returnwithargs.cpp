#include <iostream>

using namespace std;

// Function that returns a value and takes an integer argument
int displayNum(int num)
{
  return num += 50;
}

int main()
{
  // Function call
  cout << "Number: " << displayNum(50) << endl; // Return value
  return 0;
}

// Note: It is advisable to use the return value of a function.