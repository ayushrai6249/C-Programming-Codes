#include <stdio.h>
int main()
{
    int x;
lable:
    printf("enter the number: ");
    scanf("%d", &x);
    int y, z = 0;
    while (x > 0)
    {
        y = x % 10;
        z = (z + y) * 10;
        x = x / 10;
    }
    printf("the reverse of the digit is %d\n", z / 10);
    goto lable;
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int x;
// lable:
//     printf("\nenter the number: ");
//     scanf("%d", &x);
//     printf("the reverse of thye digit is: ");     // this code reverse the digit but not as a number
//     int y;
//     while (x > 0)
//     {
//         y = x % 10;
//         printf("%d", y);
//         x = x / 10;
//     }
//     goto lable;
//     return 0;
// }