#include <stdio.h>
// void fun();  //this is alternate method of prototype called declaration
int main()
{
    void fun();  //this is prototype
    fun(); // call but function is downside so we require prototype
    return 0;
}
void fun()
{
    printf("hello\n"); // function is below call
}