#include <stdio.h>
#include <string.h>

typedef struct person
{
    int age;
    float weight;
} person;

int main()
{
    person a;
    person *x = &a;

    a.age = 22;
    a.weight = 57.25;

    printf("%d\n", a.age);
    printf("%f\n", a.weight);

    (*x).age = 19;  //pass by reference
    (*x).weight = 58.5;

    printf("%d\n", a.age); // accessed without using pointer
    printf("%f\n", a.weight);

    printf("%d\n", (*x).age); // accessed using pointer
    printf("%f\n", (*x).weight);

    return 0;
    
}