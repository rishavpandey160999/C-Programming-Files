#include <stdio.h>


int main()

{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    int fact = 1;
    int i = 1;
    while(i<=a)
    {
        fact = fact*i;
        i++;
    }
    printf("The factorial of %d is %d\n", a, fact);
    return 0;
}