#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Aysh rai"; // make it Ayush rai
    for (int i = 9; i >= 2; i--)
    {
        str[i + 1] = str[i];
    }
    str[2] = 'u';
    // printf("%s", str);
    int k = 0;
    // while (str[k] != '\0')
    // {
    //     printf("%c", str[k]);
    //     k++;
    // }
    printf("%s", str);

    return 0;
}