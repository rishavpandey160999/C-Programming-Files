#include <stdio.h>

void sumAvg(int i, int j, int* k, float*l);
int main()

{
     int a,b, sum;
     float avg;
    printf("enter the values of a & b\n");
    scanf("%d%d", &a, &b);
    // sum = 0;
    // avg = 0;
    sumAvg(a, b, &sum, &avg);
    printf("Sum & Average of %d & %d are %d & %f resp\n", a, b, sum, avg);
    return 0;
}

void sumAvg(int i, int j, int* k, float*l)
{
    *k = i+j;
    *l = (i+j)/2.0;
}