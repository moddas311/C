/*
Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.
*/

#include <stdio.h>
int main()
{
    int n, ans = -1;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}