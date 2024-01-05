#include <stdio.h>
#include <string.h>

typedef struct student
{
    int rollnumber;
    char name[15];
    char department[15];
    char cource[15];
    int yearofjoining;
} student;

void check(student a, student b)
{
    if (strcmp(a.department, b.department) == 0)
    {
        printf("Both students are in the same department: %s\n", a.department);
    }
    else
    {
        printf("Students are in different departments.\n");
    }
    return;
}

int main()
{
    student a;
    a.rollnumber = 1;
    strcpy(a.name, "Ayush");
    strcpy(a.department, "CSE");
    strcpy(a.cource, "C");

    student b;
    b.rollnumber = 2;
    strcpy(b.name, "Abc");
    strcpy(b.department, "CSE");
    strcpy(b.cource, "Python");

    check(a, b);

    return 0;
}