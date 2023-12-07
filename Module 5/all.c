// Number_1:

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

// Number_2:
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        printf("Multiples");
    }
    else if (b % a == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}

// Number_3:
#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
    {
        // upperCase
        int upperCase = x - 32;
        printf("%c", upperCase);
    }
    else
    {
        // lowerCase
        int lowerCase = x + 32;
        printf("%c", lowerCase);
    }
    return 0;
}

// Problem_4:
#include <stdio.h>
int main()
{
    int a, last_digit;

    scanf("%d", &a);
    last_digit = a / 1000;
    if (last_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}

// Problem_5:
#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= '0' && X <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (X >= 'a' && X <= 'z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}

// Problem_6:
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Minimum Number
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }

    // Maximum number
    if (a >= b && a >= c)
    {
        printf("%d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }
    return 0;
}