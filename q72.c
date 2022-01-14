#include <stdio.h>

int main()

{
    char str[100];
    printf("Enter any string\n");
    gets(str);

    char* ptr = str;
    while(*ptr!='\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }

    printf("The new string is %s\n", str);
    return 0;
}