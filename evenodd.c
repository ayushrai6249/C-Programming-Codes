#include <stdio.h>
int main()
{
    int x, y;
lable:
    printf("enter the number: ");
    scanf("%d", &x);
    // if (x % 2 == 0)
    // {
    //     printf("the given number is even\n");
    // }
    // else
    // {
    //     printf("the given number is odd\n");
    // }
    x % 2 == 0 ? printf("even number\n") : printf("odd number\n");
wrong:
    printf("enter 0 to exit\nenter 1 to continue\n");
    scanf("%d", &y);
    if (y == 0)
    {
        printf("you entered to exit\n");
        goto end;
    }
    else if (y == 1)
    {
        printf("you entered to continue\n");
        goto lable;
    }
    else
    {
        printf("you entered wrong\ntry again\n");
    }
    goto wrong;
end:
    return 0;
}