#include <stdio.h>

int main() {
    int a = 21;
    int b = 10;

    if (a == b) {
        printf("Line 1 - a is equal to b\n");
    } else {
        printf("Line 1 - a is not equal to b\n");
    }

    // not equal to
    if (a != b) {
        printf("Line 1 - a is not equal to b\n");
    } else {
        printf("Line 1 - a is equal to b\n");
    }
    
    if (a < b) {
        printf("Line 2 - a is less than b\n");
    } else {
        printf("Line 2 - a is not less than b\n");
    }

    if (a > b) {
        printf("Line 3 - a is greater than b\n");
    } else {
        printf("Line 3 - a is not greater than b\n");
    }

    /* Change the values of a and b */
    a = 5;
    b = 20;

    if (a <= b) {
        printf("Line 4 - a is either less than or equal to b\n");
    }

    if (b <= a) {
        printf("Line 5 - b is neither less than or equal to b\n");
    }

    if (a >= b) {
        printf("Line 6 - a is neither greater than or equal to b\n");
    }

    if (b >= a) {
        printf("Line 7 - b is either greater than or equal to b\n");
    }

    return 0;
}