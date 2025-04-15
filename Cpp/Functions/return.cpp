#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void display1();
int display2();
char display3();
float display4();
double display5();

int main()
{
  // Function call
  display1(); // No return value

  int result = display2(); // Return value stored in result
  cout << "The return value of display2() is: " << result << endl;
  cout << "The return value of display2() is: " << display2() << endl;

  char ch = display3(); // Return value stored in ch
  cout << "The return value of display3() is: " << ch << endl;

  float f = display4(); // Return value stored in f
  cout << "The return value of display4() is: " << fixed << setprecision(2) << f << endl;

  double d = display5(); // Return value stored in d
  cout << "The return value of display5() is: " << fixed << setprecision(10) << d << endl;

  return 0;
}

// Function definitions
void display1()
{ // Function with no return value
  cout << "This is a function with no return value." << endl;
}

int display2()
{            // Function with return value
  return 42; // Return value
}

char display3()
{             // Function with return value
  return 'A'; // Return value
}

float display4()
{               // Function with return value
  return 3.14f; // Return value
}

double display5()
{                           // Function with return value
  return 2.718281828459045; // Return value
}