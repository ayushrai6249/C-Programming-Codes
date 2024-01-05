#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int *ptr = (int *)malloc(10 * 4); // sizeof(int) = 4;
    // printf("%d\n", *ptr);
    // ptr++;
    // printf("%d\n", *ptr);
    // ptr++;
    // printf("%d\n", *ptr);
    // return 0;
    int n; // 4 bytes
    printf("enter the number of integers: ");
    scanf("%d", &n);
    // int arr[n]; // n * 4 bytes
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    int *ptr = (int *)malloc(n * sizeof(int));
    int *p = ptr;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(*ptr));
        ptr++;
    }
    int *t = p;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", (*p));
        p++;
    }

    return 0;
}