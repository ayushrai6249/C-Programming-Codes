#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    swap(&a, &b); // pass by value method will not work we have to use pass by reference [pointers]
    printf("the first number is %d\nthe second number is %d", a, b);
    return 0;
} 