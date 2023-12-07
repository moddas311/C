/*
Given a number N and an array A of N numbers. Print the
lowest number and its position.
Note: if there are more than one answer print first one's position.
*/

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int minimum = INT_MAX, position;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < minimum)
        {
            minimum = ar[i];
            position = i+1;
        }
    }
    printf("%d %d", minimum, position);
    return 0;
}