#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int t; t < test; t++)
    {
        long long int n[4];
        long long int d;
        int flag = 1;
        for (long long int i = 0; i < 4; i++)
        {
            scanf("%lld", &n[i]);
        }
        for (long long int i = 0; i < 4; i++)
        {
            d = n[0] / (n[1] * n[2] * n[3]);
            if (n[0] != n[1] * n[2] * n[3] * d)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("%lld\n", d);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}