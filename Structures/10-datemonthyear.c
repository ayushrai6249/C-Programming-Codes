#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct dates
    {
        int date;
        int month;
        int year;
    } date;

    date a;
    a.date = 3;
    a.month = 12;
    a.year = 2003;

    date b;
    b.date = 13;
    b.month = 2;
    b.year = 2004;

    bool flag = true;
    if (a.date != b.date)
    {
        flag = false;
    }
    if (a.month != b.month)
    {
        flag = false;
    }
    if (a.year != b.year)
    {
        flag = false;
    }

    if (flag == true)
    {
        printf("equal");
    }
    else
    {
        printf("unequal");
    }

    return 0;
}