#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    char b = '3';
    char *ptrb = &b;
    printf("%d\n", &ptra);
    ptra++;
    printf("%d\n", &ptra);
    printf("%d\n", &ptra + 1);
    printf("%d\n", &ptrb);
    printf("%d\n", &ptrb + 1);
    return 0;
}