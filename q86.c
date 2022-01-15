#include <stdio.h>

struct customer
{
    int ac;
    float balance;
    char name[100];
};



void display(struct customer cus[3]);
int main()

{
    struct customer cus[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the account no. of customer-%d\n", i + 1);
        scanf("%d", &cus[i].ac);

        printf("Enter the balance of customer-%d\n", i + 1);
        scanf("%f", &cus[i].balance);

        fflush(stdin);
        printf("Enter the name of customer-%d\n", i + 1);
        gets(cus[i].name);
    }

    display(cus);
    
    return 0;
}

void display(struct customer cus[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Account No. of customer-%d is %d\n", i + 1, cus[i].ac);
        // scanf("%d", &emp[i].code);

        printf("Balance of customer-%d is %.2f\n", i + 1, cus[i].balance);
        // scanf("%f", &emp[i].salary);

        printf("Name of customer-%d is %s\n", i + 1, cus[i].name);
        // gets(emp[i].name);
    }
}