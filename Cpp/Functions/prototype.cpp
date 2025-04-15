#include <iostream>

using namespace std;

// Function prototype
void display1();

void display0()
{
  cout << "Hello, World!" << endl;
}

int main()
{
  display0();
  display1();
  return 0;
}

// Function definition
void display1()
{
  cout << "Hola, Mundo!" << endl;
}