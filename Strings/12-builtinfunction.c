#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Ayush rai";
    // int x = strlen(str);
    // printf("%d\n", x);
    printf("the length of str is %d ", strlen(str)); // size of string
    printf("\n");
    char s1[6] = "ayush";
    char s2[6];
    char s3[5] = " rai";
    // strcpy(s2, s1);
    printf("the content of s1 is copied to s2 %s ", strcpy(s2, s1)); // copy content of s1 to s2
    printf("\n");
    s2[0] = 'A';
    printf("%s", s2);
    printf("\n");
    // strcat(s1, s3);
    // printf("%s\n", s1);
    printf("s1 + s3 = %s", strcat(s1, s3)); // copy s3 and add with s1 (s1 is changed now)
    printf("\n");
    printf("the revrse of s1 is %s ", strrev(s1));
    return 0;
}