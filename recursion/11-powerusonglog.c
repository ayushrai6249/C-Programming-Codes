#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        int x = powerlog(a, b / 2);
        return x * x;
    }
    else
    {
        int x = powerlog(a, (b - 1) / 2);
        return a * x * x;
    }
}
int main()
{
    int a, b;
    printf("enter base: ");
    scanf("%d", &a);
    printf("enter power: ");
    scanf("%d", &b);
    int pow = powerlog(a, b);
    printf("%d", pow);
    return 0;
}