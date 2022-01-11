#include <stdio.h>


int main()

{
    int marks;
    printf("Enter the marks of student\n");
    scanf("%d", &marks);

    if(marks>=91 && marks<= 100)
    {
        printf("Grade is A\n");
    }

    else if(marks>=81 && marks<= 90)
    {
        printf("Grade is B\n");
    }

    else if(marks>=71 && marks<= 80)
    {
        printf("Grade is C\n");
    }

    else if(marks>=61 && marks<= 70)
    {
        printf("Grade is D\n");
    }

    else if(marks>100 || marks<0)
    {
        printf("Invalid Input\n");
    }

    else
    {
        printf("You are failed\n");
    }

    return 0;
}