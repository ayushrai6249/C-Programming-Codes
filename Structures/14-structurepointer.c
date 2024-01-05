#include <stdio.h>
#include <string.h>
typedef struct pokemon // global declaration of data type
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} pokemon;
int main()
{
    pokemon pikachu;
    pokemon *x = &pikachu;
    pikachu.hp = 100;
    pikachu.attack = 120;
    pikachu.speed = 200;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "pikachu");
    printf("%p\n", x);
    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", &pikachu.tier);
    printf("%p\n", &pikachu.name);

    return 0;
}