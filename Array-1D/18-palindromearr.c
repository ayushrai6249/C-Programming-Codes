#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    int revarr[7];
    for (int i = 0; i < 7; i++)
    {
        revarr[i] = arr[6 - i];
    }
    int y = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == revarr[i])
        {
            y++;
        }
    }
    if (y == 7)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }

    return 0;
}