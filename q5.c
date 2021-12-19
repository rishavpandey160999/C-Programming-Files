#include <stdio.h>
#include <conio.h>

int main()

{
    int a = 97;
    int b;
    printf("enter any number\n");
    scanf("%d", &b);

    if (b % a == 0)
    {
        printf("no. is divisible by 97\n");
    }

    else
    {
        printf("no. is not divisible by 97\n");
    }
    return 0;
}