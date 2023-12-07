/*
Given 2 numbers N ,M and an array A of Nnumbers. For every number
from 1 to M,print how many times this number appears in this array.
*/
#include <stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    int ar_a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar_a[i]);
    }

    int count[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = ar_a[i];
        count[value]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}