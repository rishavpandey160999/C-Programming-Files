#include <stdio.h>


int main()

{
    int marks[5];
    int* ptr = marks;
    for(int i=0; i<5; i++)
    {
        printf("Enter the marks of student-%d\n", i+1);
        scanf("%d", ptr);
        ptr++;
        
    }

    ptr = marks;
     for(int i=0; i<5; i++)
    {
        
        printf("marks of student-%d is %d\n", i+1, *ptr);
        ptr++;
        
    }


    return 0;
}