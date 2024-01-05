#include <stdio.h>
/*
enter n: 4
1  
A  B  
1  2  3  
A  B  C  D
*/
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 65; i <= n + 64; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 65; j <= i; j++)
            {
                printf("%d  ", j - 64);
            }
        }
        else
        {
            for (int j = 65; j <= i; j++)
            {
                char ch = (char)j;
                printf("%c  ", ch);
            }
        }

        printf("\n");
    }

    return 0;
}