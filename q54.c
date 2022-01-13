#include <stdio.h>

int change(int m);
int main()

{
     int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    int a = change(n);
    printf("New value of n is %d\n", a);
    return 0;
}

int change(int m)
{
    m=10*m;

    return m;
}