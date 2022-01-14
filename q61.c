#include <stdio.h>

void reverse(int arr[]);
int main()

{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("Enter the value of arr[%d]\n", i);
        scanf("%d", &arr[i]);
    }

    reverse(arr);

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("New value of arr[%d] is %d\n", i, arr[i]);
        // scanf("%d", &arr[i]);
    }

    
    return 0;
}

void reverse(int arr[])
{

    int temp;
    
    for (int i = 0; i < 5; i++)
    {
        /* code */

        temp = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = temp;

    }

    
}