#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", arr[i]);
    }

    // int arr[5] = {2, 4, 6, 8, 1};
    // printf("%d ", arr[2]);
    // arr[0] = 100;  // {100, 4, 6, 8, 1}
    // printf("%d ", arr[0]);

    // float ar[5] = {2.8, 4.03, 6.6, 8.6, 1};
    // printf("%f ", ar[2]);
    // ar[0] = 100.1; // {100.1, 4.03, 6.6, 8.6, 1}
    // printf("%f ", ar[0]);

    // char a[4] = {'a', 'n', 'Y', '%'};
    // printf("%c ", a[3]);
    return 0;
}
/*
int size = 10 b[size] is coreect
-> int size = 10;
   int b[size];
*/