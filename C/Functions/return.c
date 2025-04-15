#include <stdio.h>

// Syntax of a function
// return_type function_name(parameter_list) {
//     // function body
//     // code to be executed
//     return value; // optional
// }

// Function prototype
void display1(); 
int display2();
char display3();
float display4();
double display5();

int main() {
    // Function call
    display1(); // No return value

    int result = display2(); // Return value stored in result
    printf("The return value of display2() is: %d\n", result);
    printf("The return value of display2() is: %d\n", display2());
    
    char ch = display3(); // Return value stored in ch
    printf("The return value of display3() is: %c\n", ch);
    
    float f = display4(); // Return value stored in f
    printf("The return value of display4() is: %.2f\n", f);
    
    double d = display5(); // Return value stored in d
    printf("The return value of display5() is: %.2lf\n", d);
    
    return 0;
}

// Function definition
void display1() { // Function with no return value
    // This function does not return any value
    printf("This is a function with no return value.\n");
}

int display2() { // Function with return value
    // This function returns an integer value
    return 42; // Return value
}

char display3() { // Function with return value
    // This function returns a character value
    return 'A'; // Return value
}

float display4() { // Function with return value
    // This function returns a float value
    return 3.14f; // Return value
}

double display5() { // Function with return value
    // This function returns a double value
    return 2.718281828459045; // Return value
}
