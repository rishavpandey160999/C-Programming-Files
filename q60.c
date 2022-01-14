#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()

{
     int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    int* ptr = (int*)malloc(n*sizeof(int));
    
   
    for(int i=0; i<n; i++)
    {
        ptr[i] = 5*(i+1);
    }

    for(int i=0; i<n; i++)
    {
        printf("5 x %d = %d\n", i+1, ptr[i]);
    }
    return 0;
}