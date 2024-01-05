#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0, j = 9; j < 200, i < 10; i++, j++)
    // other then last condition will be treared as stratement {for any reference visit lecture 15}
    {
        printf("%d %d\n", j, i);
        }

    return 0;
}
