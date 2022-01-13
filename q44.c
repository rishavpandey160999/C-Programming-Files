#include <stdio.h>

float avg(int a, int b, int c);
int main()

{
    int a, b,c;
    printf("Enter the values of a,b,&c\n");
    scanf("%d%d%d", &a,&b,&c);
    printf("Average of 3 nos. is %f\n", avg(a, b, c));
    return 0;
}

float avg(int a, int b, int c)
{
    float d = (a+b+c)/3.0;
    return d;
}