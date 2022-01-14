#include <stdio.h>


int main()

{
    int arr[2][5][4];

    for (int i = 0; i < 2; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            for (int k = 0; k < 4; k++)
            {
                /* code */
                printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}