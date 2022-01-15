#include <stdio.h>

int main()

{
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    if (ptr == NULL)
    {
        printf("File doesn't exist\n");
    }

    else
    {
        int arr[8];

        for (int i = 0; i < 8; i++)
        {
            /* code */
            fscanf(ptr, "%d", &arr[i]);
            printf("%d ", arr[i]);
        }
        
        // fscanf(ptr, "%d", &a);
        // fscanf(ptr, "%d", &b);
        // fscanf(ptr, "%d", &c);
        // fscanf(ptr, "%d", &d);
        // fscanf(ptr, "%d", &e);
        // fscanf(ptr, "%d", &f);

        
    }
    return 0;
}