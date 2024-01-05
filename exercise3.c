#include <stdio.h>
int fib_recursive(int n)

{
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib_recursive(n - 1) + fib_recursive(n - 2));
}

int main()
{

    int n;
lable:
    printf("enter n: ");
    scanf("%d", &n);
    printf("the value at n= %d is %d\n", n, fib_recursive(n));
    goto lable;
    return 0;
}
 