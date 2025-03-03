#include <stdio.h>

int main() {
    int bin = 0b1000001;
    int oct = 0101;
    int hex = 0x41;
    // Dispays string in the double quotes
    printf("Hello, World!\n");
    // print integer
    printf("The number is: %d\n", 10);
    // print float
    printf("The number is: %f\n", 10.5);
    // print character
    printf("The character is: %c\n", 'A');
    printf("The character is: %c\n", 65);
    printf("The character is: %c\n", bin);
    printf("The character is: %c\n", oct);
    printf("The character is: %c\n", hex);
    return 0;
}