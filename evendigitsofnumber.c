#include <stdio.h>
int main()
{
    int x;
lable:
    printf("\nenter the number: ");
    scanf("%d", &x);
    int y;
    printf("even digits of the number is: ");
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            y = x % 10;
            printf("%d ", y);
        }
        x = x / 10;
    }
    goto lable;
    return 0;
}