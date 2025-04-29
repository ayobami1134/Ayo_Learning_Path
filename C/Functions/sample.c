#include <stdio.h>

extern int num;

// Function prototypes
void swap(int a, int b);
int isPrime(int n);

int main() {
  int a = 15, b = 5;

  if(isPrime(num))
    printf("%d is prime\n", num);
  else
    printf("%d is not prime\n", num);
  
  swap(a, b);
  return 0;
}