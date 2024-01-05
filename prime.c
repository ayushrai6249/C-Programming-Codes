#include <stdio.h>
int main()
{
    int n;
lable:
    printf("enter the number: ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("1 is neither prime nor composite\n");
    }
    else if (a == 1)
    {
        printf("it is a composite number\n");
    }
    else
    {
        printf("it is a prime number\n");
    }
    goto lable;
    return 0;
}