#include <stdio.h>

int sumArray(int arr[], int index, int n)
{
    long long int sum = 0;
    if (index < n)
    {
        sum = sum + arr[index] + sumArray(arr, index + 1, n);
        return sum;
    }
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int result = sumArray(arr, 0, n);
    printf("%lld\n", result);

    return 0;
}
