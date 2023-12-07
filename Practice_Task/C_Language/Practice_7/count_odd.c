#include <stdio.h>
int count_odd(int *arr, int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            odd++;
        }
    }
    printf("%d", odd);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    count_odd(a, n);
    return 0;
}