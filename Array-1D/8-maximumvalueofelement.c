#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elemnts is array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int x = arr[0]; // always correct even in negative entries
    int y = 0;
    for (int i = 1; i < n; i++) // since arr[0] is already taken
    {
        if (x < arr[i])
        {
            x = arr[i];
            y = i;
        }
    }
    printf("tne maximum value of element is %d and it is %d element", x, y);
    return 0;
}