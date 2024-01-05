#include <stdio.h>
int main()
{
    char *s1 = "myself ayush";
    char *s2 = s1;
    // s2 = s1;
    printf("%s\n", s1);
    printf("%s\n", s2);
    s2 = "Myself Ayush";
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}