#include <stdio.h>

struct complex
{
    float real;
    float img;
};


void display(struct complex com[]);
int main()

{
    struct complex com[5];

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter the value of real part of complex no. - %d\n", i + 1);
        scanf("%f", &com[i].real);
        printf("Enter the value of imaginary part of complex no. - %d\n", i + 1);
        scanf("%f", &com[i].img);
    }

    display(com);

    
    return 0;
}

void display(struct complex com[])
{
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("The value of real & imaginary part of complex no. - %d is %.2f & %.2f resp\n", i + 1, com[i].real, com[i].img);
        //scanf("%f", &com[i].real);
        // printf("The value of imaginary part of complex no. - %f\n", i + 1);
        // // scanf("%f", &com[i].img);
    }
}