#include <iostream>

int main() {
    int a = 100;
    int b = 3;

    std::cout << "Multiples of 3: ";
    while (b < a) {
        std::cout << b << " ";
        b += 3;
    }
    std::cout << std::endl;

    return 0;
}