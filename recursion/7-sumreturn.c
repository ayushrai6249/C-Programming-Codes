#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int add = sum(n);
    printf("%d", add);
    return 0;
}
