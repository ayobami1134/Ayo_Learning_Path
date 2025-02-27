#include <iostream>
#include <string>

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
    std::string m = "Hello World";

    // define immutable variables
    const int n = 100;
    const float o = 110.0;
    const char p = 'b';
    const std::string q = "Ola Mundo";

    // print variables
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "k: " << k << std::endl;
    std::cout << "l: " << l << std::endl;
    std::cout << "m: " << m << std::endl << std::endl;
    std::cout << VARSTRING << std::endl;
    std::cout << "VARNUM: " << VARNUM << std::endl;
    std::cout << "VARFLOAT: " << VARFLOAT << std::endl;
    std::cout << "VARCHAR: " << VARCHAR << std::endl;
    std::cout << "VARSTRING: " << VARSTRING << std::endl;
    std::cout << "n: " << n << std::endl;
    std::cout << "o: " << o << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "q: " << q << std::endl << std::endl;

    // variables re-initialization
    a = 15E5;
    j = 85.012345;
    l = 'b';
    m = "Bonjour le monde";
    // VARCHAR = 'B'; // error: assignment of read-only variable 'VARCHAR'

    // print re-initialized variables
    std::cout << "a: " << a << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "l: " << l << std::endl;
    std::cout << "m: " << m << std::endl << std::endl;

    // print size of variables
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

    return 0;
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