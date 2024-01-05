#include <stdio.h>

int main()
{
    int a = 100;
    // for (int i = 0;; i++)
    // {
    //     if (a > 0)
    //     {
    //         printf("%d", a);
    //         a = a - 3;
    //     }
    // }
    for (int i = 0; a > 0; i++)
    {
        printf("%d  ", a);
        a = a - 3;
    }

    return 0;
}