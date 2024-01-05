#include <stdio.h>

int main()
{
    int a;
    printf("enter the u number you want multiplication table of: ");
    scanf("%d", &a);
    printf("the multiplicatio table of %d is:\n", a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}