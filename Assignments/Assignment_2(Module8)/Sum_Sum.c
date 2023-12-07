/*
You will be given a positive integer N and N numbers after that.
You need to tell the sum of positive numbers and the sum of negative
numbers separated by a space.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k;
    int p_sum = 0, n_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        if (k > 0)
        {
            p_sum += k;
        }
        else
        {
            n_sum += k;
        }
    }
    printf("%d %d\n", p_sum, n_sum);
    return 0;
}