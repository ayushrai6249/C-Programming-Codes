#include <stdio.h>
int main()
{
    char s1[] = "my name is Ayush rai";
    // char s2[] = "my name is Ayush rai"; //create deep copy
    int k = 0;
    while (s1[k] != '\0')
    {
        k++;
    }
    char s2[k + 1];
    for (int j = 0; j < k + 1; j++)
    {
        s2[j] = s1[j];
    }
    s1[0] = 'M';
    printf("%s\n", s1); // here change in s1 does not reflect in s2 it is deep copy
    printf("%s", s2);

    return 0;
}