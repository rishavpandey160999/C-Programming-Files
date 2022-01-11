#include <stdio.h>
#include <string.h>


int main()

{
    char str[50] = "RISHAV";
    char arr[25]= "RISHAV";
    int a = strcmp(str, arr);
    printf("Value of a is %d\n", a);
    //printf("hello world");
    return 0;
}