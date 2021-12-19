#include <stdio.h>
#include <conio.h>

int main()

{
    float prin, rate, year;

    printf("enter the principle amount\n");
    scanf("%f", &prin);
    printf("enter the rate\n");
    scanf("%f", &rate);
    printf("enter the dureation\n");
    scanf("%f", &year);
    printf("simple interest = %.3f\n", prin * rate * year / 100);
    return 0;
}