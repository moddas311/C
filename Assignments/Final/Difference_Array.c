#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        int arr_a[n], arr_b[n], arr_c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr_a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            arr_b[i] = arr_a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr_b[i] > arr_b[j])
                {
                    int temp = arr_b[i];
                    arr_b[i] = arr_b[j];
                    arr_b[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr_c[i] = abs(arr_b[i] - arr_a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr_c[i]);
        }
        printf("\n");
    }

    return 0;
}