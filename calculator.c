#include <stdio.h>
int main()
{
    int a;
    char ch;
    int b;
    scanf("%d%c%d", &a, &ch, &b);
    // if (ch == '+')
    // {
    //     printf("=%d", a + b);
    // }
    // else if (ch == '-')
    // {
    //     printf("=%d", a - b);
    // }
    // else if (ch == '*')
    // {
    //     printf("=%d", a * b);
    // }
    // else if (ch == '/')
    // {
    //     printf("=%d", (float)a / b);
    // }
    // else
    // {
    //     printf("invalid operator used");
    // }
    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", (float)a / b);
        break;
    default:
        printf("invalid operator used");
    }

    return 0;
}