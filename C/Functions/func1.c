#include <stdio.h>

int num = 7;

// Write a function to swap two numbers and printout before and after swapping.
void swap(int a, int b) {
  printf("Before swapping: a = %d, b = %d\n", a, b);
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("After swapping: a = %d, b = %d\n", a, b);
}
