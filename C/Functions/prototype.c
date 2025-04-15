#include <stdio.h>

void display1(); // Function prototype

void display0() {
  printf("Hello, World!\n");
}

int main() {
  display0();
  display1();
  return 0;
}

// Function definition
void display1() {
  printf("Hola, Mundo!\n");
}