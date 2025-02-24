#include <stdio.h>

int main() {
    int a = 10;
    short int s = 32767;
    long int aa = 15;
    float b = 20.5;
    char c = 'A';
    long double d = 9223372036854775808;

    printf("The %i value of a is %ld\n", a, aa);
    printf("The value of b is %f\n", b);
    printf("The value of b is %.2f\n", b);
    printf("The value of c is %c\n", c);

    a = 2147483649;
    aa = 9223372036854775807;
    
    printf("The value of a is %d\n", a);
    printf("The value of aa is %ld\n", aa);
    printf("The value of d is %.0Lf\n", d);
    printf("The value of s is %hi\n", s);

    printf("The size of int is %ld bytes\n", sizeof(int));
    printf("The size of float is %ld bytes\n", sizeof(float));
    printf("The size of char is %ld bytes\n", sizeof(char));
    printf("The size of double is %ld bytes\n", sizeof(double));
    printf("The size of long is %li bytes\n", sizeof(long));
    printf("The size of long int is %ld bytes\n", sizeof(long int));
    printf("The size of long long is %ld bytes\n", sizeof(long long));
    printf("The size of long double is %ld bytes\n", sizeof(long double));
    printf("The size of long long int is %ld bytes\n", sizeof(long long int));

    return 0;
}

// 1 GB = 1024 MB
// 1 MB = 1024 KB
// 1 KB = 1024 Bytes
// 1 Byte = 8 bits

// Size of int = 4 bytes
// Size of float = 4 bytes
// Size of char = 1 byte

// Size of int in bits = 4 * 8 = 32 bits
// Size of float in bits = 4 * 8 = 32 bits
// Size of char in bits = 1 * 8 = 8 bits

// Representation of int in 32 bits
// 10 = 0000 0000 0000 0000 0000 0000 0000 1010
// Maximum value of int = 2^31 - 1 = 2147483647
// Minimum value of int = -2^31 = -2147483648
// 2^63 - 1 = 9223372036854775807
// Maximum value of long double = 2^63 - 1 = 9223372036854775807
// 2^15 - 1 = 32767
// Maximum value of short int = 2^15 - 1 = 32767