/*
4444444
4333334
4322234
4321234   //for n=4
4322234
4333334
4444444
*/

#include <stdio.h>
int minimum(int a, int b)
{
    int c = a;
    if (a > b)
    {
        c = b;
        return c;
    }
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int min = 0;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if (i > n)
            {
                a = 2 * n - i;
            }

            int b = j;
            if (j > n)
            {
                b = 2 * n - j;
            }

            min = minimum(a, b);

            printf("%d", n + 1 - min);
        }
        printf("\n");
    }

    return 0;
}
