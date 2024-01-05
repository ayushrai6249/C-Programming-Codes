#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= n - i; l++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        int z = i - 1;
        for (int k = 1; k <= (i - 1); k++)
        {
            printf("%d", z);
            z--;
        }
        printf("\n");
    }

    return 0;
}

/*
    1
   121
  12321
 1234321
123454321
*/