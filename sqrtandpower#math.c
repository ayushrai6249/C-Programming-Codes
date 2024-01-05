#include <stdio.h>
#include <math.h>
int main()
{
    // float a;
    // printf("enter the number: ");
    // scanf("%f", &a);
    // float root= sqrt(a);
    // printf("the square root of %f is: %f ", a, root);
    float a, b;
    printf("enter a: ");
    scanf("%f", &a);
    printf("enter b: ");
    scanf("%f", &b);
    float q = pow(a, b);
    printf("%f^%f = %f", a, b, q);
    return 0;
}