#include <stdio.h>
int change(int *x)
{
    *x = 20;
    return *x;
}
int main()
{
    int a = 10;
    change(&a);
    printf("%d", a);
    return 0;
}