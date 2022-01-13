#include <stdio.h>

void printpattern(int n);
int main()

{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printpattern(n);
    return 0;
}


void printpattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
