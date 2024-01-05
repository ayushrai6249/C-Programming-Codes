#include <stdio.h>
int main()
{
    // char arr[11] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};  //we can not count letters of a large sentence
    // for (int i = 0; i < 11; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    // printf("\n");

    char x = '\0';
    printf("%d", x); // 0
    printf("%c", x); // null
    printf("\n");

    int y = 0;
    char z = (char)y;
    printf("%c", z);
    printf("\n");

    // char arr[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};  // writing 'a', 'b' ... is tidious task

    char arr[] = "hello world\0";  //this is string //here \0 is automatically added
    char brr[9] = "ayush rai";   //this will be error since there is 10 character including \0
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }

    return 0;
}