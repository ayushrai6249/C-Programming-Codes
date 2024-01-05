#include <stdio.h>
#include <limits.h>
// int main()
// {
//     int min = INT_MIN;
//     int max = INT_MAX;
//     printf("minimum value: %d\nmaximum value: %d", min, max); //you can compare this with other entries to get maximum or minimum value
//     return 0;
// }
int main()
{
    int arr[5] = {-83, -6, -54, -65, -35};
    int max = INT_MIN;       // or you can use int max = arr[0]
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("the maximum value is %d", max);
    return 0;
}