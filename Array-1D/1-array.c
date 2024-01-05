#include <stdio.h>

int main()
{
    // printf("\n");
    int marks[2][4] = {{58, 73, 93, 91},
                       {3, 9, 91, 54}}; // declaration and initialisation

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 34;
    // marks[1] = 454;
    // marks[2] = 44;
    // marks[3] = 54;
    // printf("marks of student 1 is %d\n", marks[0]);
    // printf("marks of student 2 is %d\n", marks[1]);
    // printf("marks of student 3 is %d\n", marks[2]);
    // printf("marks of student 4 is %d\n", marks[3]);
    return 0;
}
