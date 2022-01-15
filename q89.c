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
        char a = fgetc(ptr);
        while (a != EOF)
        {
            printf("%c", a);
            a = fgetc(ptr);
        }
    }
    return 0;
}