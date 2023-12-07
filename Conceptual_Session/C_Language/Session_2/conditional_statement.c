/*
// Ei code  er khetre sob gula condition e check hobe.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= n)
    {
        printf("I will buy a Burger.\n");
    }
    if (n > 200)
    {
        printf("I will buy Icecream.\n");
    }
    if (n % 5 == 0)
    {
        printf("I will buy some Lolipop.\n");
    }
    return 0;
}
*/


// Ei Khetre jodi if true hoye jai taile next condition e dukbe na.
// jodi if true na hoy tobe elseif er ladder e dukbe
#include <stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);
    if (mark >= 80)
    {
        printf("A+\n");
    }
    else if (mark >= 70)
    {
        printf("A\n");
    }
    else if (mark >= 60)
    {
        printf("A-\n");
    }
    else if (mark >= 50)
    {
        printf("B\n");
    }
    else if (mark >= 40)
    {
        printf("C\n");
    }
    else if (mark >= 33)
    {
        printf("D\n");
    }
    else
    {
        printf("F+\n");
    }
    return 0;
}
