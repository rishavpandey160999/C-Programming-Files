#include <stdio.h>
#include <conio.h>

int main()

{

    int a;
    float b, c;
    char d;

    printf("enter the value of a\n");

    scanf("%d", &a);

    printf("enter the value of b\n");
    scanf("%f", &b);

    printf("enter the value of c\n");
    scanf("%f", &c);

    printf("sum=%f", a + b + c);

    return 0;
}