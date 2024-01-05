#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    puts("enter the string");
    gets(str);
    int k = 0;
    while (str[k] != '\0')
    {
        k++;
    }

    for (int i = 0, j = k - 1; i <= j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("the reverse of string is:");
    puts(str);

    return 0;
}