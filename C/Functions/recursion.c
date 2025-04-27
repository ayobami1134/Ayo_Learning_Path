#include <stdio.h>

int sum(int num);

int main()
{
  printf("Sum: %d\n", sum(10));
  return 0;
}

int sum(int num)
{
  if (num == 0)
    return 0;
  return num + sum(num - 1);
}
