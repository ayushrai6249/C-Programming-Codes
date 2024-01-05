#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    // float d;
    printf("enter the coordinate of:\n");
    printf("A(x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("B(x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("C(x3, y3): ");
    scanf("%lf %lf", &x3, &y3);
    // if ((0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))) == 0)
    // {
    //     printf("3 points are in straight line");
    // }
    // else
    // {
    //     printf("3 points are not in straight line");
    // }
    if (((y2 - y1) / (x2 - x1)) == ((y3 - y1) / (x3 - x1)))
    {
        printf("3 points are in straight line");
    }
    else
    {
        printf("3 points are not in straight line");
    }

    return 0;
}