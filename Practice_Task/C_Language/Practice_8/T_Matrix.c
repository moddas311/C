#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sumationOfPrimaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumationOfPrimaryDiagonal += arr[i][j];
            }
        }
    }
    int sumationOfSecondaryDiagonl = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sumationOfSecondaryDiagonl += arr[i][j];
            }
        }
    }
    int deferenceBetween = sumationOfPrimaryDiagonal - sumationOfSecondaryDiagonl;
    if (deferenceBetween < 0)
    {
        printf("%d", deferenceBetween * (-1));
    }
    else
    {
        printf("%d", deferenceBetween);
    }
    return 0;
}