#include <stdio.h>
#include <stdlib.h>


int main()

{
    int* ptr;
    ptr = (int*) malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        /* code */printf("Enter the value of ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
        
    }

     for (int i = 0; i < 5; i++)
    {
        printf("The value of ptr[%d] is %d\n", i, ptr[i]);
        // scanf("%f", &ptr[i]);
    }

    ptr = realloc(ptr, 10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        /* code */printf("Enter the value of ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
        
    }

     for (int i = 0; i < 10; i++)
    {
        printf("The value of ptr[%d] is %d\n", i, ptr[i]);
        // scanf("%f", &ptr[i]);
    }
    
    
    return 0;
}