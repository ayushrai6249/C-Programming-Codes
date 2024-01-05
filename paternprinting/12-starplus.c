/*
make patern which look like
          *
          *
      * * * * *   if n=5(here n must be odd)
          *
          *
                             use # at blank space
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == ((n + 1) / 2) || i == ((n + 1) / 2))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}