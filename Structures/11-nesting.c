#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;

    typedef struct legendpokemon
    {
        pokemon normal;
        // char name[15];
        // int hp;
        // int speed;
        // int attack;
        // char tier;
        char ability[15];
    } legendpokemon;

    typedef struct godlegendarypokemon
    {
        legendpokemon legend;
        int specialattack;
    } godpokemon;

    legendpokemon mewtoo;
    strcpy(mewtoo.ability, "pressure");
    mewtoo.normal.attack = 200;
    mewtoo.normal.speed = 100;
    mewtoo.normal.hp = 120;
    mewtoo.normal.tier = 'B';
    strcpy(mewtoo.normal.name, "mewtoo");

    godpokemon pikachu;
    pikachu.specialattack = 2000;
    strcpy(pikachu.legend.ability, "hghspeed");
    strcpy(pikachu.legend.normal.name, "pikachu");
    pikachu.legend.normal.hp = 150;
    pikachu.legend.normal.speed = 200;
    pikachu.legend.normal.attack = 100;
    pikachu.legend.normal.tier = 'A';

    return 0;
}