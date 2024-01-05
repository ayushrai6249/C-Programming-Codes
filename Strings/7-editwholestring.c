#include <stdio.h>
int main()
{
    char *str = "my self ayush rai";
    printf("%s", str);
    printf("\n");
    str = "my name is ayush rai"; // we can edit whole string but not individual character
    printf("%s", str);
    return 0;
}