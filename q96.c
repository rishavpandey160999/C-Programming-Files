#include <stdio.h>

int main()

{
    FILE *ptr = fopen("Fil.txt", "r");

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        /* code */
        fscanf(ptr, "%d", &arr[i]);
    }

    fclose(ptr);
    

        ptr = fopen("Fil.txt", "w");

        for (int i = 0; i < 10; i++)
    {
        /* code */
        fprintf(ptr, "%d ", 2*arr[i]);
    }

    fclose(ptr);

    return 0;
}