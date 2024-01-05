#include <stdio.h>
#include <string.h>
int main()
{
    char arr[] = "Ayush rai";
    // printf("%s", arr);
    puts(arr); // automatically gives \n
    puts("learn string");
    char str[40];
    // scanf("%s", str); //only first word is used
    gets(str); // let's use another method
    // scanf("%[^\n]s", str);
    printf("your input is %s", str);
    return 0;
}