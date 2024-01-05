#include <stdio.h>
int fabonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fabonacci(n - 1) + fabonacci(n - 2);
    }
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("%d", fabonacci(n));
    return 0;
} 