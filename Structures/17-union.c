#include <stdio.h>
#include <string.h>
int main()
{
    union pokemon // only one of the datatype can be used at a time
    {
        char ownername[15]; // it doesnt take 28 bytes it takeks size equal to data type having maximum size(15 in this case)
        int hp;
        int speed;
        int attack;
        char tier;
    } picachu;

    strcpy(picachu.ownername, "Ash");
    // picachu.attack = 60;
    // picachu.hp = 50;
    // picachu.speed = 100;
    // picachu.tier = 'A';  // if all is initialised last one will be stored properly

    printf("%s\n", picachu.ownername);
    // printf("%d\n", picachu.attack);
    // printf("%d\n", picachu.hp);
    // printf("%d\n", picachu.speed);
    // printf("%c\n", picachu.tier);

    return 0;
}