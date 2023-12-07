// Given N numbers. Count how many of these values are even, odd, positive and negative.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int even = 0, odd = 0, positive = 0, negetive = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (a > 0)
        {
            positive++;
        }
        else if (a < 0)
        {
            negetive++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negetive);
    return 0;
}