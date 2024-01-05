#include <stdio.h>
int main()
{
    int marks[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the marks of student of roll number %d: ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("students with rool number %d failed the exam\n", i);
        }
    }
    return 0; 
}

