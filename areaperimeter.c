#include <stdio.h>

int main()
{
    int l, b;
    printf("enter length: ");
    scanf("%d", &l);
    printf("etner breadth: ");
    scanf("%d", &b);
    if (l * b > 2 * (l + b))
    {
        printf("yes, area of rectange is greater than its perimeter");
    }
    else if (l * b < 2 * (l + b))
    {
        printf("no, area of rectange is not greater than its perimeter");
    }
    else
    {
        printf("area of reactagle is equal to its perimeter");
    }

    return 0;
}
