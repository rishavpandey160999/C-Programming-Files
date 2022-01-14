#include <stdio.h>

void decrypt(char str[]);
int main()

{
    char str[]="DVDV!QBQB!CJZB!NVLV5";
    
    decrypt(str);
    

    printf("The new string is %s\n", str);
    return 0;
}

void decrypt(char str[])
{

    char* ptr = str;
    while(*ptr!='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }

}