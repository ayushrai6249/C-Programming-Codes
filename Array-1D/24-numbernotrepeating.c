#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {2, 3, 3, 2, 5, 8, 8};
    for (int i = 0; i < 7; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d", arr[i]);
            break;
        }
    }

    return 0;
}