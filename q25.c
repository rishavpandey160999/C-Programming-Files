#include <stdio.h>


int main()

{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);


    switch (num)
    {
    case 1:
        /* code */
    printf("No. is 1\n");
        break;
    
    case 2:
        /* code */
    printf("No. is 2\n");
        break;
    
    case 3:
        /* code */
    printf("No. is 3\n");
        break;
    
    default:
    // case 1:
        /* code */
    printf("No. is not 1,2, or 3\n");
        break;
    
        // break;
    }
    return 0;
}