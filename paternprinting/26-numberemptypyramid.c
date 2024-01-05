/*
1234567
123 567    //for n=4
12   67
1     7
*/

#include <stdio.h>
int main()
{
    int m;

    printf("enter number: ");
    scanf("%d", &m);
    int n = m - 1;
    for (int q = 1; q <= 2 * m - 1; q++)
    {
        printf("%d", q);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= n - i + 1; l++)
        {
            printf("%d", l + n + i);
        }

        printf("\n");
    }
    return 0;
}