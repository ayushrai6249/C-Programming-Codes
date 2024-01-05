#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the number of rows: ");
    scanf("%d", &r);
    printf("enter the number of column: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("enter the elements of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < r; j++)
    //     {
    //         printf("%d ", arr[j][i]);
    //     }
    //     printf("\n");
    // }
    int trr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            trr[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", trr[i][j]);
        }
        printf("\n");
    }

    return 0;
}