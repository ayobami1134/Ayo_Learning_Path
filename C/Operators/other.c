#include <stdio.h>

int main() {
    int a, b = 20, c;

    a = 10;
    c = a + b;
    printf("c = %d\n", c);

    printf("Size of c: %lu bytes\n", sizeof(c));

    return 0;
}