#include <stdio.h>

struct vector
{
    float x;
    float y;
};

struct vector sum(struct vector *ptr);
int main()

{
    struct vector vec[10];
    struct vector *ptr = vec;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("Enter the x comp of vector - %d\n", i + 1);
        scanf("%f", &ptr->x); // We can also write like this (*ptr).x
        printf("Enter the y comp of vector - %d\n", i + 1);
        scanf("%f", &ptr->y); // We can also write like this (*ptr).y
        ptr++;
    }

    struct vector a = sum(vec);
    printf("Sum of X & Y comps ten vectors are %f & %f resp\n", a.x, a.y);
    return 0;
}

struct vector sum(struct vector *ptr)
{
    struct vector SUM; //= {vec[0].x + vec[1].x , vec[0].y + vec[1].y};
    SUM.x = 0;
    SUM.y = 0;

    for (int i = 0; i < 10; i++)
    {
        /* code */
        SUM.x += ptr->x;
        SUM.y += ptr->y;

        ptr++;
    }

     return SUM;
}