#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's bazar jabo.\n");
        if (tk >= 10000)
        {
            printf("Saint Martin Jabo.\n");
        }
        else
        {
            printf("Ferot Ahum\n");
        }
    }
    else
    {
        printf("Ghore boiya thahum");
    }
    return 0;
}