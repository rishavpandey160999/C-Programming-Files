#include <stdio.h>


int main()

{
    char food;
    int a;
    printf("Which food do you want to eat?\n B = Burger\n P = Pizza\n F = French Fries\n S = Sandwich\n");
    
    scanf("%c", &food);

    switch (food)
    {
    case 'B':
        printf("How many burgers do you want to eat?\n");
        scanf("%d", &a);
        printf("Pay Rs %d\n", 200*a);
        break;

        case 'S':
        printf("How many sandwiches do you want to eat?\n");
        scanf("%d", &a);
        printf("Pay Rs %d\n", 150*a);
        break;

        case 'F':
        printf("How many French Fries do you want to eat?\n");
        scanf("%d", &a);
        printf("Pay Rs %d\n", 50*a);
        break;

        case 'P':
        printf("How many pizzas do you want to eat?\n");
        scanf("%d", &a);
        printf("Pay Rs %d\n", 500*a);
        break;

    
    default:

        printf("Invalid Input");
        break;
    }
    return 0;
}