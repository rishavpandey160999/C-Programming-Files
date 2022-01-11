// Online C compiler to run C program online
#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char Class;
    char name[100];
};

int main()
{
    struct employee emp[3];
    // Write C code here
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d code: ", i + 1);
        scanf("%d", &emp[i].code);
        printf("Employee %d salary: ", i + 1);
        scanf("%f", &emp[i].salary);
        fflush(stdin);
        printf("Employee %d class: ", i + 1);
        scanf("%c", &emp[i].Class);
        fflush(stdin);
        printf("Employee %d name: ", i + 1);
        gets(emp[i].name);
    }
    //printf("Hello world");
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d code is %d\n", i + 1, emp[i].code);
        //scanf("%d", &emp[i].code);
        printf("Employee %d salary is %f\n", i + 1, emp[i].salary);
        //scanf("%f", &emp[i].salary);
        printf("Employee %d class is %c\n", i + 1, emp[i].Class);
        //scanf("%c", &emp[i].Class);
        printf("Employee %d name is %s\n", i + 1, emp[i].name);
        //scanf("%s", emp[i].name);
    }
    return 0;
}