/*
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i += 1)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i); //Here will print 1234 not 5.
    }
    return 0;
}
*/

// If we want print 5 then code and conditio is below.
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 10; i += 1)
    {
        printf("%d\n", i); // Here will print 12345.
        if (i == 5)
        {
            break;
        }
    }
    return 0;
}
