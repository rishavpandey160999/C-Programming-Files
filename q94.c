#include <stdio.h>

int main()

{
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    FILE* str;
    str = fopen("fifa.txt", "w");

    char a = fgetc(ptr);
    while (a != EOF)
    {
        fprintf(str, "%c", a);
        a = fgetc(ptr);
    }
    fclose(ptr);

    fprintf(str, "\n");

    ptr = fopen("file.txt", "r");

    a = fgetc(ptr);
    while (a != EOF)
    {
        fputc(a, str);
        a = fgetc(ptr);
    }
    fclose(ptr);
    fclose(str);


    return 0;
}