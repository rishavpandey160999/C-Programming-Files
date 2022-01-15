#include <stdio.h>

struct employee{
    float salary;
    char name[100];
};

int main()

{
    FILE* ptr = fopen("Fil.txt", "w");
    struct employee emp[2];

    for (int i = 0; i < 2; i++)
    {
        /* code */
        printf("Enter the salary and name of employee-%d\n", i+1);
        scanf("%f %s", &emp[i].salary, emp[i].name);
    }

    for (int i = 0; i < 2; i++)
    {
        /* code */
        fprintf(ptr, "%s, %f\n", emp[i].name, emp[i].salary);
        // fprintf(ptr, "%f\n", emp[i].salary);
        // scanf("%f %s", &emp[i].salary, emp[i].name);
    }

    fclose(ptr);
    
    
    return 0;
}