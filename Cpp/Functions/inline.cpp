#include <iostream>

using namespace std;

inline int add(int a, int b)
{
  a += 5;
  return a + b;
}

int multiply(int a, int b)
{
  return a * b;
}

int main()
{
  int x = 5, y = 10;

  cout << "Product: " << multiply(x, y) << endl;
  cout << "Product: " << multiply(x - 3, y - 7) << endl;
  cout << "Sum: " << add(x, y) << endl;
  cout << "Product: " << multiply(x + 3, y - 8) << endl;

  return 0;
}