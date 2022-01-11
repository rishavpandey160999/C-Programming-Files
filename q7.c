#include <stdio.h>
#include <string.h>


int main()

{
    char arr[50];
    char str[65];
    int i, n;
    printf("Enter the string\n");
    gets(arr);

    printf("Bonjour %s\n", arr);

    
    
   

   // gets(arr);

   printf("How many characters of string do you want?\n");
   scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        fflush(stdin);
      printf("enter the character for str[%d]\n", i);
      scanf("%c", &str[i]);
       //fflush(stdin);
    }

    str[i] = '\0';

    
     printf("Hola %s\n", str);

     
    int a = strcmp(arr, str);
    printf("Value of a is %d\n", a);
    
    return 0;
}