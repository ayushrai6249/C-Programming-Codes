#include <stdio.h>
int main()
{
    int n, m;
    printf("enter rows and column in 1st matrix: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("enter the elements of matrix 1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y;
    printf("enter rows and column in 2nd matrix: ");
    scanf("%d %d", &x, &y);
    int brr[x][y];
    printf("enter the elements of matrix 2:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\n");
    int t = m; // or k = x
    if (m != x)
    {
        printf("multiplication is not possible in this case");
    }
    else
    {
        int mrr[n][y];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                mrr[i][j] = 0;
                for (int k = 0; k < t; k++)
                {
                    mrr[i][j] = mrr[i][j] + arr[i][k] * brr[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%d ", mrr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}