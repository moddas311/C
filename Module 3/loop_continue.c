/*
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 10; i += 1)
    {

        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i); // Ekhane 5 skip hoye jabe.
    }
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 10; i += 1)
    {
        printf("%d\n", i); // Ekhane 5 skip hobe na karon 5 already print hoyr grche.
        if (i == 5)
        {
            continue;
        }
    }
    return 0;
}
