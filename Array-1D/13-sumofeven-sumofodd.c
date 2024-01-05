#include <stdio.h>
int main()
{
    int arr[10] = {6, 3, 6, 8, 45, 32, 14, 35, 2, 20};
    int x = 0, y = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            x += arr[i];
        }
        else
        {
            y += arr[i];
        }
    }
    printf("difference between sum of elements at even indeces and sum of elements at odd indeces is %d", x - y);
    return 0;
}