// the series is : 1 - 2 + 3 - 4 + 5..... upto n terms

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of digit: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("the sum of the series is %d", -n / 2); // this is without using loop
    }
    else
    {
        printf("the sum of the series is %d", (n + 1) / 2);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n, y = 0;
//     printf("enter the number of digits: ");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)    //this is solved using loop
//     {
//         if (i % 2 != 0)
//         {
//             y = y + i;
//         }
//         else
//         {
//             y = y - i;
//         }
//     }
//     printf("the sum is %d", y);
//     return 0;
// }
