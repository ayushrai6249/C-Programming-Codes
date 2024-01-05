#include <stdio.h>
int main()
{
    int x;
lable:
    printf("enter the number: ");
    scanf("%d", &x);
    int t, z = 0;
    while (x > 0)
    {
        t = x % 10;
        z = z + t;
        x = x / 10;
    }
    printf("the sum of all digits is: %d\n", z);
    goto lable;
    return 0;
}
