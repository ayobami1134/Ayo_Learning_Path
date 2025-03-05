#include <stdio.h>

void fileOutput();

int main() {
    int bin = 0b1000001;
    int oct = 0101;
    int hex = 0x41;
    // Dispays string in the double quotes
    printf("Hello, World!\n");
    // print integer
    printf("The number is: %d\n", 10);
    // print float
    printf("The number is: %f\n", 10.5);
    // print character
    printf("The character is: %c\n", 'A');
    printf("The character is: %c\n", 65);
    printf("The character is: %c\n", bin);
    printf("The character is: %c\n", oct);
    printf("The character is: %c\n\n", hex);

    //more output functions
    puts("Hello, World!");
    putchar('A');
    putchar(10);
    putchar(65);
    putchar(10);
    putchar(bin);
    putchar(10);
    putchar(oct);
    putchar(10);
    putchar(hex);

    // call fileOutput function
    fileOutput();

    return 0;
}

// Generate the output for file using fprintf, fputs, fputc
void fileOutput() {
    FILE *fp;
    fp = fopen("output.txt", "w");
    fprintf(fp, "Hello, World!\n");
    fputs("Hello, World!\n", fp);
    fputc('A', fp);
    fputc(10, fp);
    fputc(65, fp);
    fputc(10, fp);
    fputc(0b1000001, fp);
    fputc(10, fp);
    fputc(0101, fp);
    fputc(10, fp);
    fputc(0x41, fp);
    fputc(10, fp);
    fclose(fp);
}
