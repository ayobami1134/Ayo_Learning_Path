#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 5;
    int b = 20;
    bool c = true;
    bool d = false;
    bool e = 4;
    bool f = 0;

    if (c && d ) {
        printf("Line 0 - Condition is true\n");
    } else {
        printf("Line 0 - Condition is not true\n");
    }

    if (c || d) {
        printf("Line 00 - Condition is true\n");
    } else {
        printf("Line 00 - Condition is not true\n");
    }

    if (e && d) {
        printf("Line 000 - Condition is true\n");
    } else {
        printf("Line 000 - Condition is not true\n");
    }

    if (f || d) {
        printf("Line 0000 - Condition is true\n");
    } else {
        printf("Line 0000 - Condition is not true\n");
    }

    if (a && b) {
        printf("Line 1 - Condition is true\n");
    }

    if (a || b) {
        printf("Line 2 - Condition is true\n");
    }

    /* Let's change the values of a and b */
    a = 0;
    b = 10;

    if (a && b) {
        printf("Line 3 - Condition is true\n");
    } else {
        printf("Line 3 - Condition is not true\n");
    }
    
    if (a || b) {
        printf("Line 4 - Condition is true\n");
    } else {
        printf("Line 4 - Condition is not true\n");
    }

    if (!((a && b) || (a < b))) {
        printf("Line 5 - Condition is true\n");
    }

    return 0;
}