#include <stdio.h>
#define PI 3.14159265359
#define area(r) (PI * r * r)
int main()
{
    printf("%f\n", PI);
    // float -> 6 decimal places

    printf("%f\n", area(10));

    return 0;
}