#include <stdio.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    printf("the ap is: ");
    // for (int i = 4; i <= 3 * n + 1; i = i + 3)  //method 1
    // {
    //     printf("%d ", i);
    // }
    int a = 4;  //method 2
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a);
        a = a + 3;
    }

    return 0;
}
