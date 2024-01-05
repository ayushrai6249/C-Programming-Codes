#include <stdio.h>
int main()
{
    int arr[8] = {2, 6, 89, 65, 35, 5};
    int x;
    printf("enter the value of x: ");
    scanf("%d", &x);
    int k = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > x)
        {
            k += 1;
        }
    }
    printf("number of elements greater than x(%d) is %d", x, k);

    return 0;
}