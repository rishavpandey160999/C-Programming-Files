#include <stdio.h>


int main()

{
    int a = 5;
    int* ptr = &a;
    printf("Address and value  of a is %u and %d resp\n", ptr, *(ptr));
    return 0;
}