#include <stdio.h>
void display(int n, int arr[]);

int main()

{
    int arr[3][10];
    display(2, arr[0]);
    display(7, arr[1]);
    display(9, arr[2]);
    return 0;
}

void display(int n, int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        /* code */
        arr[i] = n*(i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("\n\n%d x %d = %d\n", n, i+1, arr[i]);
    }

    printf("\n\n****************************************\n\n");
}

