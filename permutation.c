#include <stdio.h>
int factorial(int x)
{
    int a = 1;
    for (int i = 1; i <= x; i++)
    {
        a = a * i;
    }
    return a;
}
int main()
{
    int n, r;
    printf("enter n: ");
    scanf("%d", &n);
    printf("enter r: ");
    scanf("%d", &r);
    int p = factorial(n) / factorial(n - r);
    printf("%d", p);
    return 0;
}