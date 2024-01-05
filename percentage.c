#include <stdio.h>
int main()
{
    float a, b, c, d, e, x;
lable:
    printf("enter marks of each subject:\n");
    printf("physics: ");
    scanf("%f", &a);
    printf("chemistry: ");
    scanf("%f", &b);
    printf("math: ");
    scanf("%f", &c);
    printf("english: ");
    scanf("%f", &d);
    printf("physical education: ");
    scanf("%f", &e);
    x = (a + b + c + d + e) / 5;
    printf("percentage: %f\n", x);
    if (x > 33)
    {
        printf("you are passed\n\n\n");
    }
    else
    {
        printf("you failed\ngo and commit suicide\n\n\n");
    }
    int y;
again:
    printf("enter 0 to exit\nenter 1 to continue\n");
    scanf("%d", &y);
    if (y == 1)
    {
        printf("you enterd to continue\n\n\n");
        goto lable;
    }
    else if (y == 0)
    {
        printf("you entered to exit\n\n\n");
        goto end;
    }
    else
    {
        printf("you entered wrong\nenter again\n\n\n");
        goto again;
    }
end:
    return 0;
}