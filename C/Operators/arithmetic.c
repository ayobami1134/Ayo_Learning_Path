#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 0;

    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    c = a * b;
    printf("a * b = %d\n", c);

    c = b / a;
    printf("b / a = %d\n", c);

    c = b % a;
    printf("b %% a = %d\n", c);

    // increment and decrement operators
    printf("\nIncrement and decrement operators: postfix\n");
    c = a++;
    printf("a++ = %d\n", c);
    printf("a = %d\n", a);

    c = a--;
    printf("a-- = %d\n", c);
    printf("a = %d\n", a);

    printf("\nIncrement and decrement operators: prefix\n");
    c = ++a;
    printf("++a = %d\n", c);
    printf("a = %d\n", a);

    c = --a;
    printf("--a = %d\n", c);
    printf("a = %d\n", a);

    return 0;
}