#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("enter matrix 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[3][3];
    printf("enter matrix 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    // int srr[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         srr[i][j] = arr[i][j] + brr[i][j];
    //     }
    // }
    printf("the sum of thr given matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}