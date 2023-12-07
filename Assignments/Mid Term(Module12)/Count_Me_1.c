#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n];
    int mod_2 = 0;
    int mod_3 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ary[i] % 2 == 0 && ary[i] % 3 == 0)
        {
            mod_2++;
        }
        else if (ary[i] % 2 == 0)
        {
            mod_2++;
        }
        else if (ary[i] % 3 == 0)
        {
            mod_3++;
        }
    }
    printf("%d %d", mod_2, mod_3);
    return 0;
}