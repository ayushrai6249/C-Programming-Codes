#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[100];
    int x = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i != 89)
        {
            arr[i] = i + 1;
        }
    }
    bool flag = true;
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] != i + 1)
        {
            flag = false;
            x = i;
        }
    }
    if (flag == false)
    {
        printf("the missing number is %d and its index is %d", x + 1, x);
    }

    return 0;
}