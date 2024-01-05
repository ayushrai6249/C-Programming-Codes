#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][2] = {{2, 3}, {5, 6}, {9, 6}};
    int max = INT_MIN;
    int x = 0, y = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("the maximim of elements is %d and its indeces are {%d, %d}", max, x, y);

    return 0;
}