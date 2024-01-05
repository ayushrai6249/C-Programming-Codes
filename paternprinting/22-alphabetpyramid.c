/*
enter n: 4
          A 
       A  B  C 
    A  B  C  D  E 
 A  B  C  D  E  F  G 
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (int k = 65; k <= 2 * i + 63; k++)
        {
            char ch = (char)k;
            printf(" %c ", ch);
        }
        printf("\n");
    }
    return 0;
}