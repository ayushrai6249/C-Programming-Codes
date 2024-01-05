// #include <stdio.h>
// void fun(int x[])
// {
//     x[0] = 10;
//     return;
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("%d\n", arr[0]);
//     fun(arr);
//     printf("%d\n", arr[0]);
//     return 0;
// }
#include <stdio.h>
void swap(int arr[])
{
    int temp;
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main()
{
    int arr[2] = {5, 4};
    swap(arr);
    printf("%d\n%d", arr[0], arr[1]);
    return 0;
}