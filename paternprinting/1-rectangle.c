#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the number of lines(rows): ");
    scanf("%d", &n);
    printf("enter the number of stars in each line(column): ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}