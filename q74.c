#include <stdio.h>


int main()

{
    char arr[100];
    // char* ptr = arr;

    printf("Enter any string\n");
    gets(arr);
    char a;
    printf("Which char occurence you want?\n");
    scanf("%c", &a);
    int count = 0;
    int i=0;
    while (arr[i]!='\0')
    {
        /* code */
        if(arr[i]==a)
        {
            count++;

        }
        i++;
    }

    printf("The no. of occurence of %c is %d\n", a, count);
    
    return 0;
}