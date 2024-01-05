#include <stdio.h>
#include <strings.h>
int main()
{
    char str[] = "my self ayush rai";
    // char *ptr = &str[0];
    char *ptr = str; // ptr points to str[0]
    // printf("%p\n", ptr);
    // printf("%p\n", &str[0]);
    // printf("%p\n", &str[1]);
    // printf("%p\n", str + 1);
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    char *ptrstr = "Hyush rai";
    // ptrstr[0] = 'A'; // we can not edit here in this case of initialisation but we can modify whole string
    while (*ptrstr != '\0')
    {
        printf("%c", *ptrstr);
        ptrstr++;
    }

    return 0;
}