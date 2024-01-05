/*
enter n: 4
A  B  C  D  
A  B  C  D  
A  B  C  D  
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
        for (int j = 65; j <= n + 64; j++)
        {
            char ch = (char)j;
            printf("%c  ", ch);
        }
        printf("\n");
    }
    return 0;
}