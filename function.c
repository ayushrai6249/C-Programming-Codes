#include <stdio.h>
int sum(int a, int b); // declare
// int sum(int a, int b)   // we can use this function above calling to avoid declaration and prototype
// {
//     return a + b;
// }
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*'); // we need '' for character "" will be string
    }
}
int takenumber()
{
    int i;
    printf("enter a number: ");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c, d;
    a = 9;
    b = 87;
    // int sum(); // this is prototype it is alternate method of declaration
    c = sum(a, b); // argument with return
    printstar(7);  // argument without return
    printf("the sum of %d and %d is %d\n", a, b, c);
    d = takenumber(); // return without argument
    printf("the number is %d\n", d);
    void printhash(); // this is prototype
    printhash();      // without argument without return
    return 0;
}
int sum(int a, int b)
{
    return a + b; // functin is avilable downside the calling
}

// make a function without argument and without return value  QUIZZZZZZZZZZ........
void printhash()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '#'); // we need '' for character "" will be string
    }
}
