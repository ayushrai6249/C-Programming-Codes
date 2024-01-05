#include <stdio.h>
int main()
{
    int x = 5;
    printf("%d\n", x);   // output is 5
    printf("%d\n", x++); // output is still 5 since it is post invcreament so from now x = 6
    printf("%d\n", x);   // output is 6
    printf("%d\n", ++x); // it is preincriment so before printing x x is increased to 7 so out put is 7
    return 0;
}
