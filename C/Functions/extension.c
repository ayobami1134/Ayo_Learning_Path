#include <stdio.h>

const int var = 10; // global variable
int bar = 20; // global variable

void printNumber(int num) { // num is a automatic/local variable
  printf("num: %d\n", num);
}

int staticFunction() {
  static int x = 0; // static variable
  x++;
  return x;
}