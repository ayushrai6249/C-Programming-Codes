#include <stdio.h>

int main()
{
    float n, a = 100;
    printf("enter n: ");
    scanf("%f", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%f  ", a);
        a = a / 2;
    }

    return 0;
}
