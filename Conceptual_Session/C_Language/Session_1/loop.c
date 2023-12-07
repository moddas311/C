// For Loop.

/*
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Square of %d is %d\n", i, i * i);
    }
    return 0;
}
*/

// Jodi ami only even number gular square ber korte chai taile continue statement use kora lagbe
/*
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
            continue;
        printf("Square of %d is %d\n", i, i * i);
    }
    return 0;
}
*/

// Jodi ami ekta loop 10 er moddhe 5 obdhi chalaite chai tahole break statement use korte hbe.
/*
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue;
        if (i == 5)
            break;
        printf("Square of %d is %d\n", i, i * i);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
            continue;
        if (i == 5)
            break;
        printf("Square of %d is %d\n", i, i * i);
    }
    return 0;
}
*/

// Loop jodi boro theke choto diker jonno use korte chai taile
/* #include <stdio.h>
int main()
{
    for (int i = 10; i >= 1; i--)
    {
        if (i % 2 == 1)
            continue;
        if (i == 5)
            break;
        printf("Square of %d is %d\n", i, i * i);
    }
    return 0;
} */

// ALT + SHIFT + A == Multiline Comment.
// CTRL + / == Single Line Comment.

// While Loop
/* #include <stdio.h>
int main()
{
    int i = 10;
    while (i >= 1)
    {
        if (i % 2 == 1)
        {
            i--;
            continue;
        }
        if (i == 5)
        {
            break;
        }
        printf("Square of %d is %d\n", i, i * i);
        i--;
    }
    return 0;
} */

// DO While Loop
#include <stdio.h>
int main()
{
    int i = -10;
    do
    {
        if (i % 2 == 1)
        {
            i--;
            continue;
        }
        if (i == 5)
        {
            break;
        }
        printf("Square of %d is %d\n", i, i * i);
        i--;
    } while (i >= 1);

    return 0;
}