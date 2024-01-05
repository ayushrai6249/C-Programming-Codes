#include <stdio.h>
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return;
// }
int main()
{
    int a, b, d;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    // M1
    //  if (a > b)
    //  {
    //      d = a - b;
    //      printf("the first number is %d\n", a - d);
    //      printf("the second number is %d\n", b + d);
    //  }
    //  else
    //  {
    //      d = b - a;
    //      printf("the first number is %d\n", a + d);
    //      printf("the second number is %d\n", b - d);
    //  }
    // M2
    //  d = a;
    //  a = b;
    //  b = d;
    //  printf("the first number is %d\nthe second number is %d", a, b);
    // M3
    b = a + b;
    a = b - a;
    b = b - a;
    printf("the first number is %d\nthe second number is %d", a, b);
    // M4
    // swap(a, b);   //pass by value method will not work we have to use pass by reference [pointers]
    // printf("the first number is %d\nthe second number is %d", a, b);
    return 0;
}