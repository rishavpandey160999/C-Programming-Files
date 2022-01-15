#include <stdio.h>

struct dates
{
    int day;
    int month;
    int year;
};
 int compare(struct dates d1, struct dates d2);
int main()

{
    struct dates d1={1, 9, 1978};
    struct dates d2={29, 11, 1975};

    printf("Date d1 is: %d/%d/%d\n", d1.day, d1.month, d1.year);
    printf("Date d2 is: %d/%d/%d\n", d2.day, d2.month, d2.year);
    int a = compare(d1, d2);

    printf("Date comparison returns %d\n", a);
    return 0;
}

int compare(struct dates d1, struct dates d2)
{
    if(d1.year > d2.year)
    {
        return 1;
    }

   else if(d1.year < d2.year)
    {
        return -1;
    }

    else if(d1.month > d2.month)
    {
        return 1;
    }

    else if(d1.month < d2.month)
    {
        return -1;
    }

    else if(d1.day > d2.day)
    {
        return 1;
    }

    else if(d1.day < d2.day)
    {
        return -1;
    }

    return 0;
}