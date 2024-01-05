#include <stdio.h>
int main()
{
    char str[] = "my self ayish rai";
    printf("%s     -> given string\n", str);
    str[10] = 'u';
    printf("%s     -> edited string\n", str);
    char *ptr = str;
    *ptr = 'M';
    printf("%s     -> edited string\n", str);
    *(ptr + 8) = 'A';
    printf("%s     -> edited string\n", str);
    ptr = "My name is Ayush rai";
    printf("%s     -> new string\n", ptr);
    printf("\n");
    printf("%s     -> original string is still saved\n", str);
    return 0;
}