#include <stdio.h>

int main()

{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    int fact = 1;

    if (a < 0)
    {
        printf("Invalid input\n");
    }

    else
    {
        for (int i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
         printf("The factorial of %d is %d\n", a, fact);
    }
   
    return 0;
}