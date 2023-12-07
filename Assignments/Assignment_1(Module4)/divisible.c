// Question_3: You will be given a non-negative integer N, you need to tell if this number is divisible
// by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 1)
    {
        if (i % 3 == 0)
        {
            printf("%d YES\n", i);
        }
        else
        {
            printf("%d NO\n", i);
        }
    }
    return 0;
}