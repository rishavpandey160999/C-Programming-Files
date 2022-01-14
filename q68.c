#include <stdio.h>
#include <string.h>

int main()

{
    char arr[100];
    char str[100];
    int size;
    
    printf("Enter any string\n");
    gets(str);

    printf("How many characters of string do you want\n");
    scanf("%d", &size);


    for (int i = 0; i < size; i++)
    {
        /* code */
        fflush(stdin);
        printf("Enter the value of arr[%d]\n", i);
        scanf("%c", &arr[i]);
    }

    arr[size] = '\0';

    int a = strcmp(str, arr);
    printf("String comparison returns %d\n", a);
    
    return 0;
}