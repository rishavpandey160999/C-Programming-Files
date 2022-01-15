#include <stdio.h>

struct vector
{
    float x;
    float y;
};
struct vector sum(struct vector vec[]);
int main()

{
    struct vector vec[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("Enter the x comp of vector - %d\n", i + 1);
        scanf("%f", &vec[i].x);
        printf("Enter the y comp of vector - %d\n", i + 1);
        scanf("%f", &vec[i].y);
    }

    struct vector a = sum(vec);
    printf("Sum of X & Y comps ten vectors are %f & %f resp\n", a.x, a.y);

    return 0;

    
}

struct vector sum(struct vector vec[])
{
    struct vector SUM; //= {vec[0].x + vec[1].x , vec[0].y + vec[1].y};
    SUM.x = 0;
    SUM.y = 0;

    for (int i = 0; i < 10; i++)
    {
        /* code */
        SUM.x += vec[i].x;
        SUM.y += vec[i].y;
    }
    
    return SUM;
}