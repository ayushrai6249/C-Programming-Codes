#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 9;
    for (int j = 1; j <= k % 7; j++)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (i == 0)
            {
                arr[0] = arr[6] + 1;
            }
            else
            {
                arr[i] = arr[i - 1];
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}