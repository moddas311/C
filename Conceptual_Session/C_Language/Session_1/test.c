// Input streame ache and eitar ekta sundor name ache oitar name buffer.

/*
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Your Num1: ");
    scanf("%d", &a);

    printf("Enter Your Num2: ");
    scanf("%d", &b);
    printf("Num1: %d Num2: %d\n", a,b);
    return 0;
}
*/

// if we need to / like 5/6 then
/*
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Your Num1: ");
    scanf("%d/%d", &a, &b);
    printf("Num1: %d Num2: %d\n", a, b);
    return 0;
}
*/

// Amra jodi 3 digit er output pete chai like 012 or 001 intiger er jonno
// amader jevabe kora lagbe.
/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a numbr: ");
    scanf("%d", &a);
    printf("Your 3 digits number are: %.3d\n", a);
    return 0;
}
*/

// float er khetre point er por ekta rounding figure diye dibe
// but double eita hoy na. so when amra decimal niye kaj korbo tokhon
// amra double niye kaj korbo.
#include <stdio.h>
int main()
{
    // float a;
    double a;

    printf("Enter double number:");
    scanf("%lf", &a);
    printf("Your number is: %0.2lf", a);
    return 0;
}


