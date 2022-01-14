#include <stdio.h>

void strcpy(char arr[], char str[]);
int main()

{
    char str[]="Rishav_Pandey";
    char arr[100];
    // int n = strlen(str);
    strcpy(arr, str);
    printf("%s", arr);
    return 0;
}

void strcpy(char arr[], char str[])
{
    int i = 0;
    while(str[i]!='\0')
    {
        arr[i] = str[i];
        i++;
    }

    arr[i]='\0';

    
}