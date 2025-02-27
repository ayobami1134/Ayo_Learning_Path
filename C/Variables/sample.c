#include <stdio.h>

#define VARNUM 10
#define VARFLOAT 20.456
#define VARCHAR 'A'
#define VARSTRING "Constants"

int main() {
    // define mutable variables
    int a = 10;
    signed int b = 20;
    signed int c = -25;
    unsigned int d = 30;
    unsigned int e = -35;

    short f = 40;
    long g = 50;
    long long h = 60;
    long double i = 70.0;

    float j = 80.012345;
    double k = 90.012345;

    char l = 'a';
    char *m = "Hello World";

    // define immutable variables
    const int n = 100;
    const float o = 110.0;
    const char p = 'b';
    const char q[] = "Ola Mundo";

    // print variables
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);
    printf("f: %d\n", f);
    printf("g: %ld\n", g);
    printf("h: %lld\n", h);
    printf("i: %Lf\n", i);
    printf("j: %f\n", j);
    printf("k: %.3f\n", k);
    printf("l: %c\n", l);
    printf("m: %s\n\n", m);
    printf("%s\n", VARSTRING);
    printf("VARNUM: %d\n", VARNUM);
    printf("VARFLOAT: %f\n", VARFLOAT);
    printf("VARCHAR: %c\n", VARCHAR);
    printf("VARSTRING: %s\n", VARSTRING);
    printf("n: %d\n", n);
    printf("o: %f\n", o);
    printf("p: %c\n", p);
    printf("q: %s\n\n", q);

    // variables re-initialization
    a = 15E5;
    j = 85.012345;
    l = 'b';
    m = "Bonjour le monde";
    // VARCHAR = 'B'; // error: assignment of read-only variable 'VARCHAR'

    // print re-initialized variables
    printf("a: %d\n", a);
    printf("j: %f\n", j);
    printf("l: %c\n", l);
    printf("m: %s\n\n", m);

    // print size of variables
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of char: %ld bytes\n", sizeof(char));
    printf("Size of short: %ld bytes\n", sizeof(short));
    printf("Size of long: %ld bytes\n", sizeof(long));
    printf("Size of long long: %ld bytes\n", sizeof(long long));
    printf("Size of long double: %ld bytes\n", sizeof(long double));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
}

// Equation Terms
// operand1 operator operand2 = result
// 10 + 20 = 30
// lvalue = rvalue
// a = 10

// variable naming samples
// totalNumberOfCats is recommended
// total_number_of_cats is recommended
// totalnumberofcats is not recommended
// totalCats is recommended
// total_cats is recommended
// totalcats is not recommended
// _sum is not recommended
// sum is recommended
// var1 is not recommended
// var_1 is recommended