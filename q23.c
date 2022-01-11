#include <stdio.h>


int main()

{
   char a;
   printf("Enter a character\n");
   scanf("%c", &a); 

   if(a>=97 && a<=122)

   {
       printf("Its a lower character\n");
   }

   else
   {
       printf("Its not a lower character");
   }
    return 0;
}