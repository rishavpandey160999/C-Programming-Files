#include <stdio.h>

struct complex
{
    float real;
    float img;
};

int main()

{

    // struct vector v1, v2;
    // v1.x = 4.2;
    // v1.y = 9.8;

    // v2.x = 3.3;
    // v2.y = 3.9;
    struct complex c1 = {4.2, 9.8};
    struct complex c2 = {3.3, 3.9};

    printf("real & imaginary comp of c1 are %.2f, %.2f resp\n", c1.real, c1.img);
    printf("real & imaginary comp of c2 are %.2f, %.2f resp\n", c2.real, c2.img);
    return 0;
}