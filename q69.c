#include <stdio.h>

int strlen(char str[]);
int main()

{
    char str[100];
    printf("Enter any string\n");
    gets(str);
    int a = strlen(str);
    printf("The length of the string is %d\n", a);
    return 0;
}

int strlen(char str[])
{
    char *ptr = str;
    int count = 0;

    while (*ptr != '\0')
    {
        /* code */
        count++;
        ptr++;
    }

    return count;
}