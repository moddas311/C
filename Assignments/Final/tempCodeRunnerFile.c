#include <stdio.h>
int main()
{
    int n, space, star;
    scanf("%d", &n);
    int numberOfOdd = (n - 1) / 2 + 1;
    space = (10 + n) / 2;
    star = 1;
    for (int i = 1; i <= numberOfOdd + 5; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" ");
        }
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}