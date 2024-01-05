#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= 2 * i - 1; j = j + 2) //this is also correct method
        // {
        //     printf("%d ", j);
        // }
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a = a + 2;  // this is another method
        }
        printf("\n");
    }
    return 0;
}