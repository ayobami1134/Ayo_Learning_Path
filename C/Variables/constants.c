#include <stdio.h>

#define B 20

int main() {

    const int A = 10;

    printf("The value of A is %d\n", A);
    printf("The value of B is %d\n", B);
    printf("The value of A + 5 is %d\n", A+5);

    // A = 20; // This will give an error because A is a constant
    // B = 30; // This will give an error because B is a constant

    return 0;
}

// Variable namimg rules
// 1. Variable names must begin with a letter or an underscore. (A-Z, a-z, or _ )
// 2. Variable names cannot begin with a number.
// 3. Variable names can only contain alpha-numeric characters and underscores (A-z, 0-9, and _ ).
// 4. Variable names are case-sensitive (age, Age and AGE are three different variables).
// 5. The variable name should not be a keyword.
// 6. Variable names should be meaningful and descriptive.
// 7. Variable names should be written in lowercase.
// 8. If the variable name is made up of two words, the second word should start with a capital letter (camelCase).
// 9. If the variable name is made up of two words, the words could be separated by an underscore (snake_case).
// 10. Variable names should not be too long.
