#include <stdio.h>
#include <stdlib.h>


int main()

{
    int* ptr;
    ptr = (int*) calloc(6, sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        /* code */printf("Enter the value of ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
        
    }

     for (int i = 0; i < 6; i++)
    {
        printf("The value of ptr[%d] is %d\n", i, ptr[i]);
        // scanf("%f", &ptr[i]);
    }
    
    
    return 0;
}