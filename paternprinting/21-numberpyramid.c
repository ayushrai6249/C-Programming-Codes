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
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" %d ", k);
        }
        printf("\n");
    }
    return 0;
}


/*
             1 
          1  2  3 
       1  2  3  4  5 
    1  2  3  4  5  6  7 
 1  2  3  4  5  6  7  8  9 
*/