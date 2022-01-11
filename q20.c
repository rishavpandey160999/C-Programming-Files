#include <stdio.h>


int main()

{
    int physics, chemistry, biolology;
    float avg;
    printf("Enter the marks of student in physics, chemistry, and biology\n");
    scanf("%d %d %d", &physics, &chemistry, &biolology);
    avg = (physics+chemistry+biolology)/3.0; 

    if(avg<40)
    {
        printf("You are failed\n");
    }

    else if(physics<33 || chemistry<33 || biolology<33)
    {
    printf("You are failed\n"); 
    }

    else
    {
        printf("You are passed\n");
    }
    return 0;
}