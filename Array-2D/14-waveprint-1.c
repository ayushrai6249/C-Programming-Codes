#include <stdio.h>
int main()
{
    int n, m;
    printf("enter number of rows and column: ");
    scanf("%d %d", &n, &m);
    /*
    1 2 3
    4 5 6     INPUT
    7 8 9

    1 2 3
    6 5 4     or    1 2 3 6 5 4 7 8 9      OUTPUT
    7 8 9
    */
    int a[n][m];
    printf("eneter the elements of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}