// search if 35 is in the element or not if yes print its index
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[10] = {1, 7, 6, 8, 35, 368, 31, 53, 4, 5};
    int x = 31;
    int n = 0;
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            n = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d doesn't belong to the elements", x);
    }
    else
    {
        printf("%d belong to the elements, its index is %d", x, n);
    }

    return 0;
}