/*
#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }

    return 0;
}
*/

// Task
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    k = n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = k; j >= 1; j--)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }

    return 0;
}