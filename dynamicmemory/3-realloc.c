#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n - 1; i++) // ptr[n] -> 0
    {
        printf("enter the value at index %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value at index %d is %d\n", i, ptr[i]);
    }
    int m;
    printf("enter the size of new array: ");
    scanf("%d", &m);
    ptr = (int *)realloc(ptr, m * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        printf("enter the value at index %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("the new value at index %d is %d\n", i, ptr[i]);
    }
    return 0;
}