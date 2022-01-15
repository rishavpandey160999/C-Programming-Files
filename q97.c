#include <stdio.h>
#include <stdlib.h>


int main()

{
    float* ptr;
    ptr = (float*) malloc(5*sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        /* code */printf("Enter the value of ptr[%d]\n", i);
        scanf("%f", &ptr[i]);
        
    }

     for (int i = 0; i < 5; i++)
    {
        printf("The value of ptr[%d] is %f\n", i, ptr[i]);
        // scanf("%f", &ptr[i]);
    }
    
    
    return 0;
}