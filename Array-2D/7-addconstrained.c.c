#include <stdio.h>
int main()
{
    int arr[4][4] = {1, 3, 6, 9, 9, 2, 8, 6, 4, 2, 20, 7, 6, 3, 7, 6};
    int x = 0;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            x = x + arr[i][j];
        }
    }
    printf("%d", x);

    return 0;
}
