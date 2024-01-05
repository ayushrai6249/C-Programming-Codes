/*
enter n: 4
A  
A  B  
A  B  C  
A  B  C  D  
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 65; i <= n + 64; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            char ch = (char)j;
            printf("%c  ", ch);
        }
        printf("\n");
    }
    return 0;
}