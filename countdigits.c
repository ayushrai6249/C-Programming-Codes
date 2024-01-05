#include <stdio.h>
int main()
{
    int x;
lable:
    printf("enter the number: ");
    scanf("%d", &x);
    int y = 0;
    while (x > 0)
    {
        x = x / 10;
        y++;
    }
    printf("there are %d digits in the given number\n", y);
    goto lable;
    return 0;
}
