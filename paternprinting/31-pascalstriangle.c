 /*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>
// int factorial(int x)
// {
//     int a = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         a = a * i;
//     }
//     return a;
// }
// int combination(int i, int j)
// {
//     int p = factorial(i) / (factorial(j) * factorial(i - j));
//     return p;
// }
int main()
{
    int m;
    printf("enter the number of lines: ");
    scanf("%d", &m);
    int n = m - 1;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        int first = 1;
        printf("%d ", first);
        for (int j = 1; j < i + 1; j++)
        {
            // int x = combination(i, j);
            // printf("%d ", x);
            first = first * (i - j + 1) / (j);
            printf("%d ", first);
        }
        printf("\n");
    }

    return 0;
}