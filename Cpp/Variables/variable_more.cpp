#include <iostream>
#include <iomanip>
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
    std::cout << "Variable values:" << std::endl;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    std::cout << "Value of c: " << c << std::endl;
    std::cout << "Value of d: " << d << std::endl;
    std::cout << "Value of *ptr: " << *ptr << std::endl;
    std::cout << "Value of vb: " << vb << std::endl;
    std::cout << "Value of vc: " << vc << std::endl;

    // print addresses
    std::cout << "\nVariable addresses:" << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Address of b: " << &b << std::endl;
    std::cout << "Address of c: " << static_cast<void*>(&c) << std::endl;
    std::cout << "Address of d: " << static_cast<void*>(&d) << std::endl;
    std::cout << "Address of ptr: " << static_cast<void*>(ptr) << std::endl;

    *ptr = 66;
    std::cout << "\nValue of c: " << c << std::endl;
    ptr = &d;
    std::cout << "Value of *ptr: " << *ptr << std::endl;
    std::cout << "Address of ptr: " << static_cast<void*>(ptr) << std::endl;

    {
        int w = 70;
        std::cout << "\nValue of w: " << w << std::endl;
        std::cout << "Value of x: " << x << std::endl;

        {
            std::cout << "Value of num: " << num << std::endl;
            std::cout << "Sum of num+w: " << std::fixed << std::setprecision(2) << num + w << std::endl;
        }
    }

    return 0;
}