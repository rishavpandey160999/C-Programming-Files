#include <stdio.h>
#include <conio.h>

int main()

{
    int r, h;
    float pi = 3.14159; 
    printf("enter the value of r\n");
    scanf("%d", &r);
    printf("area of circle is %f\n", pi * r * r);
    printf("enter the value of h\n");
    scanf("%d", &h);
    printf("volume of cyl. = %f\n", pi * r * r * h);

    return 0;
}