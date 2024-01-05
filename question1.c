#include <stdio.h>

int main()
{

    int x;
label:
    printf("enter x=1 if you have passed one of maths or science exam\nenter x=2 if you have passed both of maths and science exam\nenter x=3 to exit\nx=");

    scanf("%d", &x);

    if (x == 2)
    {
        printf("you won 45,000 cash prize\n");
    }
    else if (x == 1)
    {
        printf("you won 15,000 cash prize\n");
    }
    else if (x == 3)
    {
        printf("you have exited\n");
        goto end;
    }
    else
    {
        printf("Invalid\nyou entered wrong\nplease try again\n");
    }

    goto label;
end:
    return 0;
}
