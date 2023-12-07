#include <stdio.h>
int main()
{
    int n, space, hash;
    scanf("%d", &n);
    space = n - 1;
    hash = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        if (i <= n - 1)
        {
            space--;
            hash += 2;
        }
        else
        {
            space++;
            hash -= 2;
        }
        printf("\n");
    }
    return 0;
}