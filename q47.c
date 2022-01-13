#include <stdio.h>

int fib(int n);
int main()

{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("The %d term in fibonacci series is %d\n", n, fib(n));
    // printf("Hello");
    return 0;
}

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }

    else if(n==1)
    {
        return 1;
    }
    int term = fib(n-1) + fib(n-2);
    return term;
}