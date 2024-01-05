#include <stdio.h>

int main()
{
    float n;
    printf("enter number: ");
    scanf("%f", &n);
    if (n > 0)
    {
        printf("the mod of %f is %f", n, n);
    }
    else
    {
        printf("the mod of %f is %f", n, (-1) * n);
    }

    return 0;
}
