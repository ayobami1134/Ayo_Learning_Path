#include <stdio.h>

// Write a function to check for prime number
int isPrime(int n)
{
  int i;
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
