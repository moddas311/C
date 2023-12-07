/*
Given a number N and an array A of N numbers. Print the array after
doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            printf("2 ");
        }
        if (a[i] == 0)
        {
            printf("0 ");
        }
        if (a[i] > 0)
        {
            printf("1 ");
        }
    }
    return 0;
}