#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a >= 0)
    {
        if (a % 2 == 0)
        {
            printf("Your Number is an Even Number and Number is: %d\n", a);
        }
        else
        {
            printf("Your Number is an Odd Number and Number is: %d\n", a);
        }
    }
    else
    {
        printf("Your Number Is Odd: %d\n", a);
    }
    return 0;
}