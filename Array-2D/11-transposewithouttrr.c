#include <stdio.h>
int main()
{
    int x;
    printf("enter the number of rows/column: ");
    scanf("%d", &x);
    int arr[x][x];
    printf("enter the elements of matrix:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}