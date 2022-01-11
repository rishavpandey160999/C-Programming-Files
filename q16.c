#include <stdio.h>


int main()

{
    int p,r,t;
    printf("Enter the value of p, r, t\n");
    scanf("%d %d %d", &p, &r, &t);
    // float si = p*r*t/100;
     printf("Simple interest is %f\n", p*r*t/100.0);

    return 0;
}