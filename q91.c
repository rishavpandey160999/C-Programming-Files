#include <stdio.h>

int main()

{
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    int arr[8];

    for (int i = 0; i < 8; i++)
    {
        /* code */
        fscanf(ptr, "%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    fclose(ptr);

    return 0;
}