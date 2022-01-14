#include <stdio.h>


int main()

{
    char str[]="DVDV!QBQB!CJZB!NVLV";
    char* ptr = str;
    while(*ptr!='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }

    printf("The new string is %s\n", str);
    return 0;
}