#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4};
    int *arrptr = arr;
    printf("%d\n", arr[0]);
    printf("address of first element is %d\n", &arr[0]);
    printf("address of first element is %d\n", arr);
    printf("address of second element is %d\n", &arr[1]);
    printf("address of second element is %d\n", arr + 1);
    printf("\n");
    printf("value at address of first element is %d\n", *(&arr[0]));
    printf("value at address of first element is %d\n", *(arr));
    printf("value at address of second element is %d\n", *(&arr[1]));
    printf("value at address of second element is %d\n", *(arr + 1));
    printf("\n");
    // arr++ is invalid
    arrptr++; // it is valid
    printf("value at address of first element is %d\n", arr[0]);
    printf("value at address of second element is %d\n", arr[1]);
    printf("value at address of second element is %d\n", arr[0] + 1);
    return 0;
}