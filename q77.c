#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};

int main()

{
    struct employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the code of employee-%d\n", i + 1);
        scanf("%d", &emp[i].code);

        printf("Enter the salary of employee-%d\n", i + 1);
        scanf("%f", &emp[i].salary);

        fflush(stdin);
        printf("Enter the name of employee-%d\n", i + 1);
        gets(emp[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("code of employee-%d is %d\n", i + 1, emp[i].code);
        // scanf("%d", &emp[i].code);

        printf("salary of employee-%d is %.2f\n", i + 1, emp[i].salary);
        // scanf("%f", &emp[i].salary);

        printf("name of employee-%d is %s\n", i + 1, emp[i].name);
        // gets(emp[i].name);
    }

    return 0;
}