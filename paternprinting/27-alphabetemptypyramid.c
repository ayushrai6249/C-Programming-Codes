/*
ABCDEFG
ABC EFG     //for n=4
AB   FG
A     G
*/

#include <stdio.h>
int main()
{
    int m;
    printf("eneter the number: ");
    scanf("%d", &m);
    for (int q = 1; q <= 2 * m - 1; q++)
    {
        char cha = (char)q + 64;
        printf("%c", cha);
    }
    printf("\n");
    int n = m - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            char ch1 = (char)j + 64;
            printf("%c", ch1);
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= n - i + 1; l++)
        {
            char ch2 = (char)(n + 64 + i + l);
            printf("%c", ch2);
        }

        printf("\n");
    }

    return 0;
}
