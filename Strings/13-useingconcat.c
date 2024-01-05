#include <stdio.h>
#include <string.h>
int main()
{
    char f1[20];
    puts("enter the name of first person");
    gets(f1);
    char f2[20];
    puts("enter the name of second person");
    gets(f2);
    char str[20] = " is friend of ";
    strcat(f1, str);
    printf("%s", strcat(f1, f2));
    return 0;
}