#include <stdio.h>
#include <string.h>

// void reverse(char str[], int a);
int main()

{
    char str[100];
    printf("Enter any string\n");
    gets(str);
    int a = strlen(str);
    // reverse(str, a);
    int temp;
    for (int i = 0; i < a / 2; i++)
    {
        temp = str[i];
        str[i] = str[a - 1 - i];
        str[a - 1 - i] = temp;
    }

    printf("The new string is %s\n", str);

    return 0;
}

