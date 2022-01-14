#include <stdio.h>


int main()

{
    char str[100];
    printf("Enter any string\n");
    gets(str);
    char a;
    printf("Which char you want to find??\n");
    scanf("%c", &a);
    int i=0;
    int find=0;
    while (str[i]!='\0')
    {
        /* code */
        if(str[i]==a)
        {
            find=1;
            break;
        }
        i++;

    }

    if(find==1)
    {
        printf("%c is present in given string\n", a);
    }
    
    else
    {
        printf("%c isn't present in given string\n", a);
    }

    return 0;
}