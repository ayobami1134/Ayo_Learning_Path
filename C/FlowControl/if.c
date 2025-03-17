#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d and is less than zero.\n", number);
    }
    // true if number is greater than 0
    if (number > 0)
        printf("You entered %d and is greater than zero.\n", number);
    printf("The if statement is easy.\n");

    return 0;
}