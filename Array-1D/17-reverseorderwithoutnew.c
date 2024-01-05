#include <stdio.h>
void reverse(int arr[])
{
    int i = 0;
    for (int i = 0; i < 8 - i; i++)
    {
        int temp = arr[i];
        arr[i] = arr[7 - i];
        arr[7 - i] = temp;
    }

    return;
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(arr);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}