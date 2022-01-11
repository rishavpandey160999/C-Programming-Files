#include <stdio.h>


int main()

{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    // int i = 1;
    // do
    // {
    //     /* code */
    //     printf("%d\n", i);
    //     i++;
    // } while (i<=n);
    for(int i = 1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}