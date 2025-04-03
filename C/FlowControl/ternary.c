#include <stdio.h>

int main() {
  int a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  // Using ternary operator to find the greater of two numbers
  (a > b) ? printf("The greater number is: %d\n", a) : (a != b) ? printf("The greater number is: %d\n", b) : printf("The two numbers are equal: %d = %d\n", a, b); // (condition) ? (true case) : (false case)

  return 0;
}