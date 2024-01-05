#include <stdio.h>
int main()
{
    int arr[2][2] = {1, 3, 6, 9};
    int x = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x = x + arr[i][j];
        }
    }
    printf("%d", x);

    return 0;
}