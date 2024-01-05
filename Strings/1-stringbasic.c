#include <stdio.h>
int main()
{
    // char a = 'a'; //character is written as 'character'
    int arr1[4] = {1, 5, 9, 6};
    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &arr1[i]);
    }
    printf("\n");
    char arr[4] = {'a', 't', 'g', 'p'};
    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &arr[i]);
    }
    // char ch = 'A';
    // int x = (int)ch;
    // printf("%d", x);

    return 0;
}