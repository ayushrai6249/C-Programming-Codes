#include <stdio.h>
void operate(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
        else
        {
            arr[i] = arr[i] * 2;
        }
    }
    return;
}
int main()
{
    int arr[10] = {2, 51, 8, 6, 9, 6, 32, 35, 2, 3};
    operate(arr);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}