#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*
1234
1234
1234  if n = 4
1234
*/