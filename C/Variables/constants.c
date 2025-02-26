#include <stdio.h>

#define B 20

int main() {

    const int A = 10;

    printf("The value of A is %d\n", A);
    printf("The value of B is %d\n", B);
    printf("The value of A + 5 is %d\n", A+5);

    // A = 20; // This will give an error because A is a constant
    // B = 30; // This will give an error because B is a constant

    return 0;
}