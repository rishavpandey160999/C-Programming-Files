#include <stdio.h>


int main()

{
    int a = 10;
    int sum =0;
    for(int i = 1; i<=10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural nos. is %d\n", sum);
    return 0;
}