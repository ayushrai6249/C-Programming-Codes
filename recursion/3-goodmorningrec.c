#include <stdio.h>
void greet(int n)
{
    if (n == 0)
    {
        return;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("good morning\n");
    // }
    // return;
    printf("good morning\n");
    greet(n - 1);
    return;
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    greet(n);
    return 0;
}