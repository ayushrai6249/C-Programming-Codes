#include <stdio.h>

int main()
{
    int a = 8;
    float b = 7.333;
    printf("the value of a is %d and \nvalue of b is %-1000.2f\n", a, b);
    
    /*
    (%a.bf, num); gives the value of num with b decimal points and number will have a digits
    for 7.333 there is 5 charactor if a is less them or equal to 5 there will be no difference
    but if it is more than 5 a-5 blank space will be there in front of num
    if a is negative and magnitude is more than 5 a-5 blank space will be in back of num
    */
    return 0;
}
