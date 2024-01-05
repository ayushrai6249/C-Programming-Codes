#include <stdio.h>
#include <string.h>
int main()
{
    struct pokemon // user defined data type
    {
        char ownername[15];
        int hp;
        int speed;
        int attack;
        char tier; // a, b, c, d
    } picachu, charlizard, new;

    strcpy(picachu.ownername, "ash");
    picachu.attack = 60;
    picachu.hp = 50;
    picachu.speed = 100;
    picachu.tier = 'a';

    printf("%d\n", picachu.attack);

    strcpy(charlizard.ownername, "ayush");
    charlizard.attack = 80;
    charlizard.hp = 30;
    charlizard.speed = 90;
    charlizard.tier = 'c';

    return 0;
}
