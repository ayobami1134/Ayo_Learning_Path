#include <stdio.h>

// return with arguments
int displayNum(int num) {
    // This function does return avalue and takes an integer argument
    return num += 50;
}

int main() {
    // Function call
    printf("Number: %d\n", displayNum(50)); // return value
    return 0;
}

//Function to check, it adviseable to use the return value of a function