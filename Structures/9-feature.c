#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char teir;
        char name[15];
    } pokemon;

    pokemon a, b, c;

    a.attack = 100;
    a.hp = 120;
    a.speed = 80;
    a.teir = 'A';
    strcpy(a.name, "pikachu");

    // b.attack = a.attack;
    // b.hp = a.hp;
    // b.speed = b.speed;
    // b.teir = a.teir;
    // strcpy(b.name, a.name);
    b = a; // this is possible in structures
    c = a; // it is deep copy

    printf("%d\n", b.attack);

    b.attack = 200; // it does not change a
    printf("%d\n", b.attack);
    printf("%d\n", a.attack);

    return 0;
}