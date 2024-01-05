#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {1, 2, 5, 5, 3};
    int y = INT_MIN, x = INT_MIN;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (x < arr[i])
    //     {
    //         x = arr[i];
    //     }
    // }
    // int z = INT_MIN;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i] != x && z < arr[i])  // do it in single loop
    //     {
    //         z = arr[i];
    //     }
    // }
    // printf("%d", z);
    for (int i = 0; i < 5; i++)
    {
        if (x < arr[i])
        {
            y = x;
            x = arr[i];
        }
        else if (y < arr[i] && x != arr[i])
        {
            y = arr[i];
        }
    }
    printf("%d", y);

    return 0;
}