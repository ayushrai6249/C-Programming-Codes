#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[15];
        char lastname[15];
        int age;
        int numberofmatches;
        float average;
    } cricketer;

    cricketer arr[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%s", &arr[i].firstname);
        scanf("%s", &arr[i].lastname);
        scanf("%d", &arr[0].age);
        scanf("%d", &arr[0].numberofmatches);
        scanf("%f", &arr[0].average);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s %s\n", arr[i].firstname, arr[i].lastname);
        printf("Age: %d\n", arr[0].age);
        printf("Number of matches: %d\n", arr[0].numberofmatches);
        printf("Average: %f\n", arr[0].average);
        printf("\n");
    }

    return 0;
}