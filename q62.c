#include <stdio.h>

int countarr(int* ptr);
int main()

{
    int arr[11] = {1,2,3,-6,6,8,-8,-7, 3, -3, -8};
    
    // int* ptr = arr;

    int a = countarr(arr);

    printf("No. of positive integers in given array is %d\n", a);
    return 0;
}

int countarr(int* ptr)
{
    int count = 0;
    for (int i = 0; i < 11; i++)
    {
        /* code */
        if(*ptr>0)
        {
            count++;
        }

        ptr++;

    }

    return count;

}