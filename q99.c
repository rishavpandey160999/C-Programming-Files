#include <stdio.h>
#include <stdlib.h>


int main()

{
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    int*ptr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        /* code */printf("Enter the value of ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
        
    }

     for (int i = 0; i < n; i++)
    {
        printf("The value of ptr[%d] is %d\n", i, ptr[i]);
        // scanf("%f", &ptr[i]);
    }
    
    return 0;
}