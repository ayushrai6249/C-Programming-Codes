#include <stdio.h>

int main()
{
    float x, y;
lable:
    printf("\nWELCOME TO CONVERSION\n\t\tBy Ayush rai\n\tTo convert:\n\t1: kms into miles enter 1\n\t2: inches into foot enter 2\n\t3: cms into inches enter 3\n\t4: pound into kgs enter 4\n\t5: inches into meters enter 5\nenter 0 to exit\n");

    scanf("%f", &x);

    if (x == 1)
    {
        printf("you choose to convert kms into miles\nenter value in km: ");
        scanf("%f", &y);
        printf("%f miles\n\n", y * 0.621);
    }
    else if (x == 2)
    {
        printf("you choose to convert inches into foot\nenter value in inches: ");
        scanf("%f", &y);
        printf("%f foot\n\n", y * 0.0833);
    }
    else if (x == 3)
    {
        printf("you choose to convert cms into inches\nenter value in cm: ");
        scanf("%f", &y);
        printf("%f inche\n\n", y * 0.394);
    }
    else if (x == 4)
    {
        printf("you choose to convert pound into kgs\nenter value in pound: ");
        scanf("%f", &y);
        printf("%f kg\n\n", y * 0.454);
    }
    else if (x == 5)
    {
        printf("you choose to convert inches into meters\nenter value in inches: ");
        scanf("%f", &y);
        printf("%f foot\n\n", y * 0.0254);
    }
    else if (x == 0)
    {
        printf("you choose to exit\n\n");
        goto end;
    }
    else
    {
        printf("you choose wrong option\nplease try again\n\n");
    }

    goto lable;
end:
    return 0;
}
