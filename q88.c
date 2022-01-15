#include <stdio.h>

typedef struct time
{

    int hour;

    int min;

    int sec;
} time;
int compare(time t1, time t2);
int main()

{
    time t1 = {22, 15, 59};
    time t2 = {9, 16, 22};

    printf("Time t1 is: %d:%d:%d\n", t1.hour, t1.min, t1.sec);
    printf("Time t2 is: %d:%d:%d\n", t2.hour, t2.min, t2.sec);
    int a = compare(t1, t2);

    printf("Time comparison returns %d\n", a);
    return 0;
}

int compare(time t1, time t2)
{
    if (t1.hour > t2.hour)
    {
        return 1;
    }

    else if (t1.hour < t2.hour)
    {
        return -1;
    }

    else if (t1.min > t2.min)
    {
        return 1;
    }

    else if (t1.min < t2.min)
    {
        return -1;
    }

    else if (t1.sec > t2.sec)
    {
        return 1;
    }

    else if (t1.sec < t2.sec)
    {
        return -1;
    }

    return 0;
}