#include <stdio.h>

int main()

{
    FILE *ptr;
    ptr = fopen("filo.txt", "w");
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

   for (int i = 0; i < 10; i++)
   {
       /* code */
        fprintf(ptr, "%d x %d = %d\n", n, i+1, n*(i+1));

   }
   
    return 0;
}