#include <stdio.h>

int main()

{
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    char a = fgetc(ptr);
    while (a != EOF)
    {
        printf("%c", a);
        a = fgetc(ptr);
    }
    fclose(ptr);

    return 0;
}