#include <stdio.h>
void addsubtract(int *x, int *y)
{
    int sum, diff;
    sum = *x + *y;
    diff = *x - *y;
    *x = sum;
    *y = diff;
    return;
}

int main()
{
    int a, b, sum, diff;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    addsubtract(&a, &b);
    printf("the modified value of a is %d(a+b)\n", a);
    printf("the modified value of b is %d(a-b)\n", b);
    return 0;
}