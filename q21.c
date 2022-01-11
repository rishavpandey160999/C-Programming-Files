#include <stdio.h>


int main()

{
    int income;
    printf("Enter the income in rupees\n");
    scanf("%d", &income);
    if (income<=250000)
    {
        printf("No tax\n");
    }

    if (income>250000 && income<=500000)
    {
        printf("Pay income tax Rs %f\n", 0.05*(income-250000));
    }

    else if (income>500000 && income<=1000000)
    {
        printf("Pay income tax Rs %f\n", 0.2*(income-500000) + 0.05*250000);
    }

    else if (income>1000000)
    {
        printf("Pay income tax Rs %f\n", 0.3*(income-1000000) + 0.05*250000 + 0.2*500000);
    }
    return 0;
}