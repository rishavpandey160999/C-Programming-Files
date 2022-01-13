#include <stdio.h>

float convert(float c);
int main()

{
    float c;
    printf("Enter the temp in celcius scale\n");
    scanf("%f", &c);
    printf("Temp in farenheit scale is %f\n", convert(c));
    return 0;
}

float convert(float c)
{
    float faren = 1.8*c + 32;
    return faren;
}