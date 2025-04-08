#include <stdio.h>
#include <math.h>

double lcm(double a, double b) {
  double gcd = 1.0;
  for (int i = 1; i <= a && i <= b; i++) {
    if ((int)a % i == 0 && (int)b % i == 0) {
      gcd = i;
    }
  }
  return (a * b) / gcd;
}

int main(){
  printf("Enter a number: ");
  double number;
  scanf("%lf", &number);

  printf("The square root of %.1lf is %.1lf\n", number, sqrt(number)); // from standard library
  double result = lcm(number, 9.0); // from user-defined function
  printf("The lcm of %.1lf and %.1lf is %.1lf\n", number, 9.0, result); 
  
  return 0;
}