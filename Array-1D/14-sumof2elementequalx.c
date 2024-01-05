#include <stdio.h>
int main()
{
    int arr[10] = {5, 6, 4, 5, 9, 3, 1, 8, 12, 10};
    int x;
    printf("enter the value of x: ");
    scanf("%d", &x);
    int a, n = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a = arr[i] + arr[j];
            if (a == x && i != j && j > i)  //we can remove [&& i != j && j > i] if we initialise j as i + 1...
            {
                n += 1;
            }
        }
    }
    printf("there are %d pairs whose sum is equal to x(%d)", n, x);

    return 0;
}