#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {1, 1, 0, 8, 0, 1, 0, 0, 0};
    int max = INT_MIN;
    int x = 0;
    int y = 0;
    printf("%d", max);
    for (int i = 0; i < 3; i++)
    {
        x = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                x = x + arr[i][j];
            }
        }
        if (x > max)
        {
            max = x;
            y = i;
        }
    }
    printf("maximum number of 1 is present in row %d", y);

    return 0;
}