// Copy method in an array
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary_a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary_a[i]);
    }
    int m;
    scanf("%d", &m);
    int ary_b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ary_b[i]);
    }
    int array[n + m];
    for (int i = 0; i < n; i++)
    {
        array[i] = ary_a[i];
    }
    int i = n;
    for (int j = 0; j < m; j++)
    {
        array[i] = ary_b[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}