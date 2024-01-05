/*
enter n: 4
          * 
       *  * 
    *  *  * 
 *  *  *  * 
*/

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter n: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if ((i + j) <= n)
//             {
//                 printf("   ");
//             }
//             else
//             {
//                 printf(" * ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)    //for spaces
        {
            printf("   ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" * ");
        }

        printf("\n");
    }
    return 0;
}