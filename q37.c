#include <stdio.h>


int main()

{
    int a, i=1;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    int fact = 1;
    do
    {
        fact *= i;
        i++;

    } while(i<=a);

    printf("The fact of %d is %d\n", a, fact);
    return 0;
}