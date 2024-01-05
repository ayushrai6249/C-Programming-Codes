#include <stdio.h>

int main()
{
    int a, b, c;
lable:
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is greatest of all three\n");
    }
    else if (b > a && b > c)
    {
        printf("b is greatest of all three\n");
    }
    else if (c > b && c > b)
    {
        printf("c is greatest of all three\n");
    }
    else
    {
        printf("may be greatest two or three of them is equal");
    }
    goto lable;

    return 0;
}
//we can solve above problem using nested if concept


//take 3 input and check if they can be 3 sides of a triangle