#include <stdio.h>
#define pi 3.14 //   ; is not required
int main()
{
    int a = 8;
    const float b = 7.333;
    // pi = 7.33; in step 1(preprocessor) pi = 3.14 is given since 3.14 is not equal to 7.333
    printf("%f", pi);
    // we defined b as a const so now we cant change the value of b
    // b = 7.22; wrong since b is a constant
    return 0;
}
