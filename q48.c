#include <stdio.h>

int sum(int n);
int main()

{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("Sum of first %d natural nos. is %d\n", n, sum(n));
    return 0;
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int SUM = n + sum(n-1);
    return SUM;
}