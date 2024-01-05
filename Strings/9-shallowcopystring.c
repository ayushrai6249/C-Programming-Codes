#include <stdio.h>
int main()
{
    char s1[] = "my self Ayush rai";
    char *s2 = s1;
    s1[0] = 'M';
    printf("%s\n", s1);
    printf("%s\n", s2); //change in s1 reflect to s2 it is called shallow copy
    return 0;
}