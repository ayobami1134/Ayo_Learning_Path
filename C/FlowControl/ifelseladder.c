#include <stdio.h>

void test0() {
    char ch;
    printf("Enter a character: ");
    while(getchar() != '\n');
    ch = getchar();

    if (ch  >= 48 && ch <= 57)
        printf("%c is a number.\n", ch);
    if (ch >= 65 && ch <= 90)
        printf("%c is an upper case alphabet.\n", ch);
    if (ch >= 97 && ch <= 122)
        printf("%c is a lower case alphabet.\n", ch);
    if ((ch >= 0 && ch < 48) || (ch > 57 && ch < 65) || (ch > 90 && ch < 97) || (ch > 122))
        printf("%c is a special character.\n", ch);
}

void test1() {
    char ch;
    printf("Enter a character: ");
    while(getchar() != '\n');
    ch = getchar();

    if (ch  >= 48 && ch <= 57)
        printf("%c is a number.\n", ch);
    else if (ch >= 65 && ch <= 90)
        printf("%c is an upper case alphabet.\n", ch);
    else if (ch >= 97 && ch <= 122)
        printf("%c is a lower case alphabet.\n", ch);
    else
        printf("%c is a special character.\n", ch);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d and is less than zero.\n", number);
    }
    // true if number is greater than 0
    else if (number > 0)
        printf("You entered %d and is greater than zero.\n", number);
    // if both the above conditions are false
    else
        printf("You entered %d and is equal to zero.\n", number);

    test0();
    test1();
    printf("The if statement is easy.\n");

    return 0;
}