#include <stdio.h>
#include <string.h>


void slice(char str[], int m, int n);
int main()

{
    int m, n;
    char str[100];
    printf("Enter any string\n");
    gets(str);
    int a = strlen(str);
    printf("Length of string is %d\n", a);
    printf("enter the values of m & n\n");
    scanf("%d%d", &m, &n);

    // char str[]="HelloWorld";

    slice(str, m, n);
    printf("New string is %s\n", str);

    return 0;
}

void slice(char str[], int m, int n)
{
    int i = 0;
    while (m + i <= n)
    {

        str[i] = str[m -1 + i];
        i++;
    }

    str[i] = '\0';
}