// Delete method in an array.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    int possition;
    scanf("%d", &possition);
    for (int i = possition; i < n - 1; i++)
    {
        arry[i] = arry[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arry[i]);
    }

    return 0;
}