#include <stdio.h>

int main()

{
    int arr[5][3];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}