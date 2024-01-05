#include <stdio.h>
int ways(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (n == 3)
    {
        return 4;
    }

    else
    {
        return ways(n - 1) + ways(n - 2) + ways(n - 3); // youn can go 1 or 2 or 3 stair at a time only
    }
}
int main()
{
    int n;
    printf("enter the number of staires: ");
    scanf("%d", &n);
    printf("you can reach top in %d ways", ways(n));
    return 0;
}