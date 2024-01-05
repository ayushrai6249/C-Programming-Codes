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

    pokemon arr[3];

    strcpy(arr[0].name, "pikachu");
    arr[0].attack = 100;
    arr[0].hp = 100;
    arr[0].speed = 100;
    arr[0].teir = 'A';

    strcpy(arr[1].name, "charlizard");
    arr[1].attack = 190;
    arr[1].hp = 110;
    arr[1].speed = 90;
    arr[1].teir = 'C';

    strcpy(arr[2].name, "abc");
    arr[2].attack = 130;
    arr[2].hp = 102;
    arr[2].speed = 10;
    arr[2].teir = 'B';

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("Attack: %d\n", arr[i].attack);
        printf("HP: %d\n", arr[i].hp);
        printf("Speed: %d\n", arr[i].speed);
        printf("Teir: %c\n", arr[i].teir);
        printf("\n");
    }

    return 0;
}