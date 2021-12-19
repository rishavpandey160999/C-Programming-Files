#include <stdio.h>
#include <conio.h>

int main()

{
    float c;
    printf("enter the value of temp. in celsius scale\n");
    scanf("%f", &c);
    // float faren = 9.0/5*c +32;
    printf("The value of temp. in farenheit scale is %f\n", (1.8*c +32));
    return 0;
}