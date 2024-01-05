#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {3, 8, 9, 5, 6, 7, 4, 0, 9};
    int max = INT_MIN;
    int x = 0;
    for (int i = 0; i < 3; i++)
    {
        x = 0;
        for (int j = 0; j < 3; j++)
        {
            x = x + arr[i][j];
        }
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d", max);

    return 0;
}