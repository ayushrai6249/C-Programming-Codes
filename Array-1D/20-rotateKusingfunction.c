#include <stdio.h>
void reverse(int arr[], int a, int b)
{
    for (int i = a, j = 0; i < b - j; i++, j++)
    {
        int temp = arr[i];
        arr[i] = arr[b - j];
        arr[b - j] = temp;
    }

    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    k = k % 7;
    reverse(arr, 0, 6);
    reverse(arr, 0, k - 1);
    reverse(arr, k, 6);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}