#include <stdio.h>
int main()
{
    char arr[] = "Ayush rki";  //we cannot edit whole string
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
    arr[7] = 'a';
    int j = 0;
    while (arr[j] != '\0')
    {
        printf("%c", arr[j]);
        j++;
    }
    printf("\n");
    arr[7] = 97;
    int k = 0;
    while (arr[k] != '\0')
    {
        printf("%c", arr[k]);
        k++;
    }

    return 0;
}