#include <stdio.h>
#include <stdlib.h>


int main()

{
    int* ptr = (int*) malloc(10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        /* code */
        ptr[i]=7*(i+1);
        printf("7 x %d = %d\n", i+1, ptr[i]);
    }

    printf("\n\n");
    
ptr = realloc(ptr, 20*sizeof(int));

    for (int i = 0; i < 20; i++)
    {
        /* code */
        ptr[i]=7*(i+1);
        printf("7 x %d = %d\n", i+1, ptr[i]);
    }
    return 0;

    free(ptr);
}