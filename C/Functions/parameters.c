#include <stdio.h>

void printSum(int a, int b); // Function prototype
void printAvg(float a, int b); // Function prototype

int main() {

  // Function call
  printSum(5, 10);
  // printAvg(5); // too few arguments
  printAvg(5.7, 10.8);
  return 0;
}

// Function definition
void printSum(int a, int b) { // Function with parameters
  // This function takes two integers as parameters and prints their sum
  int sum = a + b;
  printf("The sum of %d and %d is %d\n", a, b, sum);
}

void printAvg(float a, int b) { // Function with parameters
  // This function takes a float and an integer as parameters and prints their average
  float avg = (a + b) / 2.0;
  printf("The average of %.2f and %d is %.2f\n", a, b, avg);
}