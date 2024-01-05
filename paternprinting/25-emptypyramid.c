/*
code to print pattern like
***************
******* *******
******   ******
*****     *****        //for n = 8
****       ****
***         ***   
**           **
*             *
*/

#include <stdio.h>
int main()
{
    int m;
    printf("enter n: ");
    scanf("%d", &m);
    for (int q = 1; q <= 2 * m - 1; q++)
    {
        printf("*");
    }
    int n = m - 1;
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= n + 1 - i; l++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}