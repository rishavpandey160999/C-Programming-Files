#include <stdio.h>


int main()

{
    int i = 65;
    int* j = &i;
    int** k = &j;
    printf("Value of i is %d\n", **k);
    return 0;
}