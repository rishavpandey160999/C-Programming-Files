#include <stdio.h>

void change(int* m);
int main()

{
     int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    change(&n);
    printf("New value of n is %d\n", n);
    return 0;
}

void change(int* m)
{
    *m=10*(*m);
}