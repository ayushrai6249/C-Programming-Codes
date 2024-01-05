#include <stdio.h>
int main()
{
    float x, y;
    printf("enter the coordinates: ");
    printf("(x,y): ");
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("point lie on origin");
    }
    else if (y == 0)
    {
        printf("point lie on x axis");
    }
    else if (x == 0)
    {
        printf("point lie on y axis");
    }
    else
    {
        printf("point doesn't lie on any axis");
    }

    return 0;
}