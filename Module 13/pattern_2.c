/* 
#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }

    return 0;
} 
*/


// Task
#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);
    s = n;
    k = n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = k; j >= 1; j--)
        {
            printf("*");
        }
        s++;
        k -= 2;
        printf("\n");
    }

    return 0;
}