#include <stdio.h>


int main()

{
    int age;
    printf("Enter the age of person\n");
    scanf("%d", &age);
    if(age>=18 && age<=70)
    {
        printf("You are elegible\n");
    }
    else
    {
        printf("You aren't elegible\n");
    }
    return 0;
}