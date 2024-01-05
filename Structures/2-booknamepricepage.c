#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct book
    {
        char name[20];
        float price;
        int page;
    } name; // writing book instead of name is also allowed

    name physics;
    strcpy(physics.name, "HC verma");
    physics.page = 200.25;
    physics.price = 180;

    name chemistry;
    strcpy(chemistry.name, "OP tondon");
    chemistry.page = 800.50;
    chemistry.price = 1000;

    name maths;
    strcpy(maths.name, "arihant");
    maths.page = 1500.00;
    maths.price = 4000;

    // struct book english; // if we want to add another book we have to write struct book english
    name english; // we have to write just name english using typedef

    return 0;
}