#include <stdio.h>
int main()
{
    for (int i = 97; i <= 122; i++)
    {
        printf("%d is the ASCII value of ", i);
        char ch = (char)i;    //typecasting
        printf("%c\n", ch);
    }

    return 0;
}