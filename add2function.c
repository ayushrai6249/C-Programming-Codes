#include <stdio.h>
int add(int a, int b) // yha wale a, b to main wale a, b: hme apne me mt jodia hm aapse alag hai! a, b ki jgah x, y is also correct
{
    return a + b; // yha valur return hogi a+b ki
}
int product(int a, int b)
{
    return a * b;
}
int main() // sabse pahle yha aaega
{
    int a;
    printf("enter 1st nummber: ");
    scanf("%d", &a);
    int b;
    printf("enter 2nd nummber: ");
    scanf("%d", &b);
    int sum = add(a, b); // add(a, b)  function dekhte hi line 2 pe jaega aur a, b ki value whi pass ho jaegi
    printf("the sum is %d\n", sum);
    int multiply = product(a, b);
    printf("the multiply is %d\n", multiply);
    return 0;
}