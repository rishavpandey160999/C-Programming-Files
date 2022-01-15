#include <stdio.h>

struct vector
{
    float x;
    float y;
};

int main()

{

    // struct vector v1, v2;
    // v1.x = 4.2;
    // v1.y = 9.8;

    // v2.x = 3.3;
    // v2.y = 3.9;
    struct vector v1 = {4.2, 9.8};
    struct vector v2 = {3.3, 3.9};

    printf("X & Y comp of v1 are %.2f, %.2f resp\n", v1.x, v1.y);
    printf("X & Y comp of v2 are %.2f, %.2f resp\n", v2.x, v2.y);
    return 0;
}