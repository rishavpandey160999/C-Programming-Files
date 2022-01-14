#include <stdio.h>


int main()

{
    char str[] = "Hello CUCUMUKU123";
    char* ptr = str;
    // printf("%s", str);
    // while (*ptr != '\0')
    // {
    //     /* code */
    //     printf("%c", *ptr);
    //     ptr++;
        
    // }

    for (int i = 0; i < 17 ; i++)
    {
        /* code */
        printf("%c", str[i]);
    }
    
    
    return 0;
}