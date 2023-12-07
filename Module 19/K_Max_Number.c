#include <stdio.h>
#include <limits.h>
int maxValue(int ar[], int n, int idx)
{
    if (idx == n)
    {
        return INT_MIN;
    }

    int max = maxValue(ar, n, idx + 1);
    if (ar[idx] > max)
    {
        return ar[idx];
    }
    else
    {
        return max;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = maxValue(ar, n, 0);
    printf("%d", max);
    return 0;
}