#include <stdio.h>
#include <string.h>
typedef struct pokemon // global declaration of data type
{
    char name[15];
    int hp;
    int speed;
    int attack;
    char tier;
} pokemon;
void change(pokemon p) // this is deep copy of pikachu
{
    p.attack = 60;
    p.hp = 50;
    p.speed = 100;
    p.tier = 'B';
}

void fun(pokemon p)
{
    printf("%d", p.hp);
    return;
}

int main()
{
    // typedef struct pokemon  //local declaration of data type
    // {
    //     char name[15];
    //     int hp;
    //     int speed;
    //     int attack;
    //     char tier;
    // } pokemon;
    pokemon pikachu;
    pikachu.hp = 100;
    pikachu.attack = 120;
    pikachu.speed = 200;
    pikachu.tier = 'A';

    change(pikachu);

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack); // function doesnot change value in main function
    printf("%d\n", pikachu.speed);  // structures are pass by value
    printf("%c\n", pikachu.tier);

    // fun(pikachu);

    return 0;
}