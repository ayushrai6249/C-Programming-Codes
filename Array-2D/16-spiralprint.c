#include <stdio.h>
int main()
{
    int m, n;
    printf("enter number of rows and column: ");
    scanf("%d %d", &m, &n);
    /*
    1 2 3
    4 5 6     INPUT
    7 8 9

    1 2 3 6 9 8 7 4 5      OUTPUT
    */
    int a[m][n];
    printf("eneter the elements of matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n;
    int count = 0;
    while (count < tne)
    {
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d ", a[minr][j]);
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d ", a[i][maxc]);
            count++;
        }
        maxc--;
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d ", a[maxr][j]);
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d ", a[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}