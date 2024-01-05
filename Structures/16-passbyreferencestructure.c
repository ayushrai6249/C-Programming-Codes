#include <stdio.h>
#include <string.h>
typedef struct pokemon // global declaration of data type
{
    int hp;
    int attack;
    int speed;
    char tier;
} pokemon;
// void change(pokemon p) // this is deep copy of pikachu
// {
//     p.attack = 60;
//     p.hp = 50;
//     p.speed = 100;
//     p.tier = 'B';
// }
void change(pokemon *p) // this is shallow copy of pikachu
{
    // (*p).attack = 60;
    // (*p).hp = 50;
    // (*p).speed = 100;
    // (*p).tier = 'B';
    p->hp = 50;
    p->attack = 60;
    p->speed = 100;
    p->tier = 'B';

    return;
}
int main()
{
    pokemon pikachu = {120, 100, 200, 'A'};
    // pikachu.attack = 120;
    // pikachu.hp = 100;
    // pikachu.speed = 200;
    // pikachu.tier = 'A';

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);

    pokemon *x = &pikachu;
    change(&pikachu);

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack); // function change value in main function because of using strings
    printf("%d\n", pikachu.speed);  // structures are pass by value
    printf("%c\n", pikachu.tier);

    return 0;
}