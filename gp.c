#include <stdio.h>

int main()
{
    int n, a=3;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a);
        a = a * 4;
    }

    return 0;
}
