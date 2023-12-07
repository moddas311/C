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
    int min = ary[0];
    int max = ary[0];
    for (int i = 0; i < n; i++)
    {
        if (ary[i] < min)
        {
            min = ary[i];
        }
        if (ary[i] > max)
        {
            max = ary[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ary[i] == min)
        {
            ary[i] = max;
        }
        else if (ary[i] == max)
        {
            ary[i] = min;
        }
        printf("%d ", ary[i]);
    }
    
    return 0;
} 
