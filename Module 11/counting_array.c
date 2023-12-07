#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    int count[7] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = ary[i];
        count[value]++;
    }
    for (int i = 0; i <= 6; i++)
    {
        printf("%d-%d\n", i, count[i]);
    }
    return 0;
}