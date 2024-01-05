#include <stdio.h>
int main()
{
    printf("the even number between 1 and 100 is:\n");
    //     for (int i = 2; i < 100; i = i + 2)
    //     {
    //         printf("%d\n", i);
    //     }
    //     return 0;
    //
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}