#include <stdio.h>
int maze(int cr, int cc, int n, int m)
{
    int downward = 0;
    int forward = 0;
    if (cr == n && cc == m)
    {
        return 1;
    }
    else if (cr == n)
    {
        downward += maze(cr, cc + 1, n, m);
    }
    else if (cc == m)
    {
        forward += maze(cr + 1, cc, n, m);
    }
    else
    {
        downward += maze(cr + 1, cc, n, m);
        forward += maze(cr, cc + 1, n, m);
    }
    int totalways = forward + downward;
    return totalways;
}
int main()
{
    int n, m;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    printf("enter the number of column: ");
    scanf("%d", &m);
    printf("you can go to end in %d ways", maze(1, 1, n, m));
    return 0;
}
