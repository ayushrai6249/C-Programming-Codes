#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the sizo of array: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n - 1; i++) // ptr[n] -> garbage
    {
        printf("enter the value at index %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value at index %d is %d\n", i, ptr[i]);
    }
    return 0;
}