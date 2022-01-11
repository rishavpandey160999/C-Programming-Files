#include <stdio.h>


int main()

{
    int sum = 0;
    for(int i = 1; i<10; i++)
    {
        sum = sum + 8*i;
    }
    printf("Sum of nos. occuring in multiplication table of 8 is %d\n", sum);
    return 0;
}