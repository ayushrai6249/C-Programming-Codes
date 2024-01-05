#include <stdio.h>

int main()
{
    /*
    print a multiplication table of a number entered by the user in pretty form

    example:
    input
    enter the number you want multiplication table of:
    6
    output
    table of 6:
    6 x 1 = 6
    6 x 2 = 12
    6 x 3 = 18
    6 x 4 = 24
    6 x 5 = 30
    6 x 6 = 36
    6 x 7 = 42
    6 x 8 = 48
    6 x 9 = 54
    6 x 10 = 60
    */
    int a;
    printf("enter the number you want multiplication table of\n");
    scanf("%d", &a);
    printf("multiplicstion table of %d:\n", a);
    printf("%d x 1 = %d\n", a, a * 1);
    printf("%d x 2 = %d\n", a, a * 2);
    printf("%d x 3 = %d\n", a, a * 3);
    printf("%d x 4 = %d\n", a, a * 4);
    printf("%d x 5 = %d\n", a, a * 5);
    printf("%d x 6 = %d\n", a, a * 6);
    printf("%d x 7 = %d\n", a, a * 7);
    printf("%d x 8 = %d\n", a, a * 8);
    printf("%d x 9 = %d\n", a, a * 9);
    printf("%d x 10 = %d\n", a, a * 10);
    return 0;
}
