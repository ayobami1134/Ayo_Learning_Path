#include <iostream>

using namespace std;

// Function that returns a value and takes no arguments
int displayNum()
{
  return 100;
}

int main()
{
  // Function call
  cout << "Number: " << displayNum() << endl; // Return value
  return 0;
}