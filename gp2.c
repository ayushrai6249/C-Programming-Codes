#include <stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int a = 2, r = 2;
    for (int i = 1; i <= n; i++)
    {
        printf(" %d", a);
        a = a * 2;
    }

    return 0;
}