#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int array_sum = 0;
    for (int i = 0; i < n; i++)
    {
        array_sum += ar[i];
    }
    printf("%d", array_sum);
    return 0;
}

/*
LOOP SUM
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 3; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
*/