#include <stdio.h>
int main()
{
    int n, z = 1;
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        z = z * i;
        printf("the factorial of %d is %d\n", i, z);
    }

    return 0;
}