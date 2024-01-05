/*
a=97      A=65        0=48
b=98      B=66        1=49
.         .           .
.         .           .
.         .           .


z=122     Z=96        9=57
*/
#include <stdio.h>
int main()
{
    while ('a' < 'b')
    {
        printf("\nmalayalam is a palindrome");
    }
    return 0;
}
// since a is always less than b this will go for infinte loop