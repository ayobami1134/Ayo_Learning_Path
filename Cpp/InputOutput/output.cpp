#include <iostream>

int main() {
    int bin = 0b1000001;
    int oct = 0101;
    int hex = 0x41;
    
    // Displays string in the double quotes
    std::cout << "Hello, World!" << std::endl;
    
    // Print integer
    std::cout << "The number is: " << 10 << std::endl;
    
    // Print float
    std::cout << "The number is: " << 10.5 << std::endl;
    
    // Print character
    std::cout << "The character is: " << 'A' << std::endl;
    std::cout << "The character is: " << static_cast<char>(65) << std::endl;
    std::cout << "The character is: " << static_cast<char>(bin) << std::endl;
    std::cout << "The character is: " << static_cast<char>(oct) << std::endl;
    std::cout << "The character is: " << static_cast<char>(hex) << std::endl;
    
    return 0;
}