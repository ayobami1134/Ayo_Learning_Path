#include <iostream>
#include <fstream>

void fileOutput();

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
    
    // more output functions
    std::cout << "Hello, World!" << std::endl;
    std::cout.put('A');
    std::cout.put('\n');
    std::cout.put(65);
    std::cout.put('\n');
    std::cout.put(static_cast<char>(bin));
    std::cout.put('\n');
    std::cout.put(static_cast<char>(oct));
    std::cout.put('\n');
    std::cout.put(static_cast<char>(hex));
    std::cout.put('\n');

    // call fileOutput function
    fileOutput();

    return 0;
}

// Generate the output for file using ofstream
void fileOutput() {
    std::ofstream fp("output.txt");
    fp << "Hello, World!" << std::endl;
    fp << "Hello, World!" << std::endl;
    fp.put('A');
    fp.put('\n');
    fp.put(65);
    fp.put('\n');
    fp.put(static_cast<char>(0b1000001));
    fp.put('\n');
    fp.put(static_cast<char>(0101));
    fp.put('\n');
    fp.put(static_cast<char>(0x41));
    fp.put('\n');
    fp.close();
}