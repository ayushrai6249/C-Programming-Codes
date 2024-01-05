/*
make program for
     *
    ***
   *****   //for both n=7 amd n=4
  *******   n is always odd
   *****
    ***
     *
*/

#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    int nsp = n / 2, nst = 1, ml = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }

        printf("\n");
    }

    return 0;
}