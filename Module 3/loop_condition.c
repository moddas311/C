/*
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i += 1)
    {
        if (i % 2 == 0)
        {
            printf("%d - Even\n", i);
        }
        else
        {
            printf("%d - Odd\n", i);
        }
    }
    return 0;
}
*/


#include <stdio.h>
int main()
{
    int i, j;
    scanf("%d", &j);
    for (i = 1; i <= j; i += 1)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }
    return 0;
}
