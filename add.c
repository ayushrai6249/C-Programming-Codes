#include <stdio.h>
int main()
{
    int a, b;
    printf("enter number a\n");
    scanf("%d", &a);
    // we can add such comment using [//] anywhere for instructions and output will remain same.
    printf("enter number b\n");
    scanf("%d", &b);
    // abhi tk to easy lg rha hai guys :)
    int sum = a + b;
    printf("the sum is %-8.6d\n", sum);
    // printf("the sum is %d\n", a + b); we can use this instead of code in line 12 and 11
    return 0;
}