#include <iostream>

using namespace std;

int sum(int num = 10);
int sumNonRecursive(int num = 10);

int main()
{
  cout << "Sum: " << sum(100) << endl;
  cout << "Sum: " << sumNonRecursive() << endl;
  return 0;
}

int sum(int num)
{
  if (num == 0)
    return 0;
  return num + sum(num - 1);
}

int sumNonRecursive(int num)
{
  int result = 0;
  for (int i = num; i > 0; i--)
    result += i;
  return result;
}
