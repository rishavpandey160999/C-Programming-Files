#include <stdio.h>

float gravity(int mass);
int main()

{
    int mass;
    printf("Enter the mass\n");
    scanf("%d", &mass);
    printf("Force on body of mass %d is %f\n", mass, gravity(mass));
    return 0;
}

float gravity(int mass)
{
    float force = mass*9.8;
    return force;
}