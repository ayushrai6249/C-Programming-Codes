#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))  //this is also correct
            if ((i + j) % 2 == 0)
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}