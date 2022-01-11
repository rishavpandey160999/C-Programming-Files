#include <stdio.h>

int main()

{
    int n;
    int prime = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("%d is neither prime nor composite\n", n);
    }

    else if (n < 0)
    {
        printf("Invalid Input\n");
    }

    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 1;
                break;
            }
            // i++;
        }

        if (prime == 1)
        {
            printf("%d is not a prime no.\n", n);
        }

        else
        {
            printf("%d is a prime no.\n", n);
        }
    }

    return 0;
}