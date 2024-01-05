#include <stdio.h>
int main()
{
    int arr[8] = {5, 9, 8, 54, 8, 6, 81, 8};
    int n = 0, m = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                n++;
                m = arr[i];
                break;
            }
        }
    }
    if (n != 0)
    {
        printf("there is duplicate of %d", m);
    }

    return 0;
}