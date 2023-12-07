// #include<stdio.h>
// int main()
// {
//     int a = 1000000000;
//     long long int b = 100000000000000000;
//     printf("%lld", b);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float a = 2005.256;
//     double b = 20005.987453672;
//     printf("%lf", b);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &k);
    for (n = 1; n <= k; n += 1)
    {
        printf(n);
    }
    return 0;
}