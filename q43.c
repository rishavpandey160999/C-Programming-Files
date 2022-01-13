#include <stdio.h>

long int factorial(int n);
int main()

{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Factorial of %d is %ld\n", n, factorial(n));
    return 0;
}

long int factorial(int n)
{
    
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        long int a = n * factorial(n - 1);
        return a;
    }
}
    