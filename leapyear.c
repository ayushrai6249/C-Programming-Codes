#include <stdio.h>
int main()
{
    int n;
    lable:
    printf("enter year: ");
    scanf("%d", &n);
    if (n % 4 == 0)
    {
        printf("it is a leap year\n");
    }
    else
    {
        printf("it is not a leap year\n");
    }
goto lable;
    return 0;
}