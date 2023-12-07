#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minOdd = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (minOdd > arr[i])
        {
            minOdd = arr[i];
        }
    }
    int miniCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (minOdd == arr[i])
        {
            miniCount++;
        }
    }
    if (miniCount % 2 == 1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
    return 0;
}