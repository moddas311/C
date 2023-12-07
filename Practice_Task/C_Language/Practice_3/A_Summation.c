/*
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
absolute value : means to remove any negative sign in front of a number .
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    long long int sumation = 0;
    for (int i = 0; i < n; i++)
    {
        sumation = sumation + array[i];
    }

    if (sumation < 0)
    {
        sumation = sumation * (-1);
    }
    printf("%lld\n", sumation);
    return 0;
}