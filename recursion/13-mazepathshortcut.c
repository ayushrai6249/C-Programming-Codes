#include <stdio.h>
int maze(int n, int m)
{
    int forward = 0;
    int downward = 0;
    if (n == 1 && m == 1)
    {
        return 1;
    }
    else if (n == 1)
    {
        downward += maze(n, m - 1);
    }
    else if (m == 1)
    {
        forward += maze(n - 1, m);
    }
    else
    {
        downward += maze(n, m - 1);
        forward += maze(n - 1, m);
    }
    int totalways = forward + downward;
    return totalways;
}
int main()
{
    int m, n;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    printf("enter the number of column: ");
    scanf("%d", &m);
    printf("you can go to end in %d ways", maze(n, m));
    return 0;
}