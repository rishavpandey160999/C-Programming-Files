#include <stdio.h>


int main()

{
    int year;
    printf("Enter any year\n");
    scanf("%d", &year);

    ((year%4==0 && !(year%100==0)) || year%400==0) ? printf("Its a leap year\n") : printf("Its not a leap year");

    return 0;
}