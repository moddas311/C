#include <stdio.h>
void printEvenIndicesReversed(int arr[], int currentIndex, int length)
{
    if (currentIndex >= 0)
    {
        if (currentIndex % 2 == 0)
        {
            printf("%d ", arr[currentIndex]);
        }
        printEvenIndicesReversed(arr, currentIndex - 1, length);
    }
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
    printEvenIndicesReversed(arr, n - 1, n);
    return 0;
}
