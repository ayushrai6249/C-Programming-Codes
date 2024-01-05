#include <stdio.h>
int decreasing(int n)
{
    if (n == 0)
    {
        return 1;
    }
    printf("%d\n", n);
    return decreasing(n - 1);
}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    int x = decreasing(n);
    return 0;
}