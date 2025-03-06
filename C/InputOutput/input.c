#include <stdio.h>

int main(){
    int a = 10;
    int b, c;
    char d, e;
    float f;
    double g;

    int h, i, j;

    printf("a = %d\n", a);
    printf("Enter number: ");
    scanf("%d", &b);
    printf("Enter number: ");
    scanf("%d", &c);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("Enter character: ");
    scanf(" %c", &d);
    printf("Enter character: ");
    scanf(" %c", &e);
    printf("d = %c\n", d);
    printf("e = %c\n", e);
    printf("Enter float: ");
    scanf("%f", &f);
    printf("Enter double: ");
    scanf("%lf", &g);
    printf("f = %f\n", f);
    printf("g = %lf\n", g);
    printf("Enter three numbers: ");
    scanf("%d %d %d", &h, &i, &j);
    printf("h = %d\n", h);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    
    return 0;
}