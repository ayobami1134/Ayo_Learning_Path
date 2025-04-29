#include <stdio.h>

#define MAX 100 // global constant

extern const int var;
extern int bar;

// Function prototypes
void printNumber(int num);
int staticFunction();

int main() {
  int n = 0; // automatic/local variable
  register char c = 'A'; // register variable
  printf("n: %d\n", n);
  printNumber(20);
  printf("x: %d\n", staticFunction());
  printf("x: %d\n", staticFunction());
  printf("x: %d\n", staticFunction());
  printf("Max: %d\n", MAX);
  printf("var: %d\n", var);
  printf("bar: %d\n", bar);
  printf("c: %c\n", c);
  return 0;
}
