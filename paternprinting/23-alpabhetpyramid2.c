/*
enter n: 4
   A
  ABA
 ABCBA
ABCDCBA
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
            printf(" ");
        }
        for (int l = 65; l <= i + 64; l++)
        {
            char ch = (char)l;
            printf("%c", ch);
        }
        int m = i + 63;
        for (int k = 1; k <= i - 1; k++)
        {
            char cha = (char)m;
            printf("%c", cha);
            m = m - 1;
        }
        printf("\n");
    }

    return 0;
}