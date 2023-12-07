// Add index and value method in an array.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arry[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    // Here is value and index number.
    int position, value;
    scanf("%d %d", &position, &value);
    for (int i = n; i >= position + 1; i--)
    {
        arry[i] = arry[i - 1];
    }
    arry[position] = value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arry[i]);
    }

    return 0;
} 