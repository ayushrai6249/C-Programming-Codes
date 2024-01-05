#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter value of element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int x = 0;
    for (int j = 0; j < n; j++)
    {
        x = x + arr[j];
    }
    printf("the sum of value of elements is %d", x);
    return 0;
}