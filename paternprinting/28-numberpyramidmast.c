/*
123454321
1234 4321
123   321
12     21
1       1
*/

#include <stdio.h>
int main()
{
    int m;

    printf("enter number: ");
    scanf("%d", &m);
    for (int a = 1; a < m; a++)
    {
        printf("%d", a);
    }
    for (int b = m; b >= 1; b--)
    {
        printf("%d", b);
    }
    printf("\n");
    int n = m - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" ");
        }
        for (int l = n - i + 1; l <= n - i + 1; l--)
        {
            if (l <= 0)
            {
                break;
            }
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}