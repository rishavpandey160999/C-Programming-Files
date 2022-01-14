#include <stdio.h>


int main()

{
    
    int arr[10];
    int* ptr = arr;
    if(ptr+2 == &arr[2])
    {
        printf("Yes ptr+2 points to the third element of array\n");

    }
    else
    {
        printf("No ptr+2 doesn't points to the third element of array\n");
    }
    return 0;
}
