// If we want to print with point value. 
/*
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double division = a / (b * 1.0);
    printf("Your answer is: %0.2lf\n", division);
    return 0;
}
*/


// Conditional Rendaring

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter Your first number: ");
    scanf("%d", &a);

    printf("Enter Your second number: ");
    scanf("%d", &b);

    printf("Enter Your third number: ");
    scanf("%d", &c);

    if(a>b && a> c)
    {
        printf("A is bigger: %d\n", a);
    }
    else if(b>a && b>c)
    {
        printf("B is bigger: %d\n", b);
    }
    else
    {
        printf("C is bigger: %d\n", c);
    }
    return 0;
}