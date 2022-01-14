#include <stdio.h>
void display(int n, int arr[]);

int main()

{
     int a,b,c;
    printf("enter the valus of a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("\n");
    int arr[3][10];
    display(a, arr[0]);
    display(b, arr[1]);
    display(c, arr[2]);

     for (int i = 0; i < 3; i++)
    {
        /* code */
       for (int j = 0; j < 10; j++)
       {
           /* code */
            printf("%d ", arr[i][j]);
       }

       printf("\n\n");
       
    }

    
    return 0;
}

void display(int n, int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        /* code */
        arr[i] = n*(i+1);
    }
    
   
}
