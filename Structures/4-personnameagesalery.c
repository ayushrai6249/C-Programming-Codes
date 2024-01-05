#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        char name[20];
        int age;
        float salery;
    } p1, p2;

    strcpy(p1.name, "Ram");
    p1.age = 29;
    p1.salery = 99998.256;

    strcpy(p2.name, "shyam");
    p2.age = 27;
    p2.salery = 95998.256;

    printf("%s\n", p1.name);
    printf("%d\n", p2.age);

    return 0;
}