#include <stdio.h>

void pass(int* j);
int main()

{
    int i;
    printf("Address of i is %u\n", &i);
    pass(&i);

    // if()
    return 0;
}

void pass(int* j)

{
printf("Address of i is %u\n", j);

}