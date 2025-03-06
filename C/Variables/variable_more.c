#include <stdio.h>
#include <stdbool.h>
#define num 7.25

int x = 5;

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    char d = c;
    char *ptr = &c;

    bool vb = true; // true = 1, false = 0
    bool vc = false;

    // print variables
    printf("Variable values:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %f\n", b);
    printf("Value of c: %c\n", c);
    printf("Value of d: %c\n", d);
    printf("Value of *ptr: %c\n", *ptr);
    printf("Value of vb: %d\n", vb);
    printf("Value of vc: %d\n", vc);

    // print addresses
    printf("\nVariable addresses:\n");
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of c: %p\n", &c);
    printf("Address of d: %p\n", &d);
    printf("Address of ptr: %p\n", ptr);

    *ptr = 66;
    printf("\nValue of c: %c\n", c);
    ptr = &d;
    printf("Value of *ptr: %c\n", *ptr);
    printf("Address of ptr: %p\n", ptr);

    {
        int w = 70;
        printf("\nValue of w: %d\n", w);
        printf("Value of x: %d\n", x);

        {
            printf("Value of num: %f\n", num);
            printf("Sum of num+w: %.2f\n", num + w);
        }
    }

    // printf("Value of w: %d\n", w); // error: 'w' undeclared

    return 0;
}