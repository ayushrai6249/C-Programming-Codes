#include <stdio.h>
int main()
{
    int arr[8] = {5, 9, 8, 3, 5, 3, 95, 45};
    int revarr[8];
    for (int i = 0; i < 8; i++)
    {
        revarr[i] = arr[7 - i];
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", revarr[i]);
    }

    return 0;
}