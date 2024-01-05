#include <stdio.h>
int main()
{
    int a, b, power = 1;
    printf("enter the base: ");
    scanf("%d", &a);
    printf("enter the power: ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
        printf("%d to the power %d is %d\n", a, i, power);
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a, b, z;

//     printf("enter the base: ");
//     scanf("%d", &a);
//     printf("enter the power: ");
//     scanf("%d", &b);
//     z = a;
//     for (int i = 2; i <= b; i++)
//     {
//         a = a * z;
//     }
//     printf("a^b= %d", a);
//     return 0;
// }