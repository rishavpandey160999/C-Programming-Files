#include <stdio.h>


int main()

{
    float r, h;
    float pi = 3.14159;
    printf("Enter the value of r\n");
    scanf("%f", &r);
    printf("Enter the value of h\n");
    scanf("%f", &h);
    printf("Area of circle is %f\n", pi*r*r);
    printf("Volume of cylinder  is %f\n", pi*r*r*h);
    return 0;
}