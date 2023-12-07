// Given a number N, and N numbers, find maximum number in these N numbers.
/* #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, max_value = 0;
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max_value)
        {
            max_value = a;
        }
    }
    printf("%d", max_value);
    return 0;
} */



// For Minimum
/* #include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, max = INT_MIN, min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
    }
    printf("%d %d\n", min, max);
    return 0;
} */