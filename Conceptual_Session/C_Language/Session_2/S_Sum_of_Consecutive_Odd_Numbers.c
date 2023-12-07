// Given two numbers X and Y. Print the sum of all odd numbers between
// them, excluding X and Y.
#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int x, y, odd_sum = 0;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 == 1)
                {
                    odd_sum += i;
                }
            }
        }
        else if (y > x)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 == 1)
                {
                    odd_sum += i;
                }
            }
        }
        printf("%d\n", odd_sum);
    }

    return 0;
}