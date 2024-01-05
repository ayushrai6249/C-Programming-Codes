#include <stdio.h>

void india()    // definition
{
    printf("you are indian\n");
    void coding(); // this is prototype
    coding();      // call not aavilable upside we require prototype
    return;
}
void greet()
{
    printf("good morning\n");
    printf("how are you?\n");
    india(); // call avilable upside
    return;  // means function khtm
}
void coding()
{
    printf("you are gonna be a best coder\n");
    return;
}

void scold()
{
    for (int i = 0; i < 3; i++)
    {
        printf("what the fuck\n");
        printf("are you mad\n");
    }

    return; // means function khtm
}
int main() // main only come once and program starts eith main
{
    greet(); // call avilable upside
    greet(); // call avilable upside
    scold(); // call avilable upside
    greet(); // call avilable upside
    return 0;
}