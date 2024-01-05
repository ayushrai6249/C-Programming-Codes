#include <stdio.h>

int main()
{
    int x;
lable:
    printf("is the given number divisible by 3 or 5 but not by 15?\n");
    printf("enter the number to check: ");
    scanf("%d", &x);
    if (x % 15 != 0 && (x % 3 == 0 || x % 5 == 0)) // preority of && is more than that of ||
        // {
        printf("yes\n"); // here we can avoid {...} since there is only 1 line
    // }
    else
        //{
        printf("no\n"); // here we can avoid {...} since there is only 1 line
    // }

    // if (x % 3 == 0 || x % 5 == 0)
    // {
    //     if (x % 15 == 0)
    //     {
    //         printf("no\n");
    //     }
    //     else
    //     {
    //         printf("yes\n");
    //     }
    // }
    // else
    // {
    //     printf("no\n");
    // }
    goto lable;
    return 0;
}
