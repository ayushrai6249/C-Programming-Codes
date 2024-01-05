#include <stdio.h>
void function(int *array)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("%d\n", array[i]);
        printf("%d\n", *(array + i));
        *(array + 2) = 232;
    }
    return;
}
int main()
{
    int arr[] = {23, 4, 89, 55};
    function(arr);
    return 0;
}