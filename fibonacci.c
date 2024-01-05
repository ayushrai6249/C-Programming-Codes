#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, sum = 1;   // to solve issue in 1st and 2nd value
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n - 2; i++)   // (n + 2)th term is provided
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("the %d digit of the series is %d", n, sum);
    return 0;
}