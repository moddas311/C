/*
Given a number N and an array A of N digits (not separated by space).
Print the summation of these digits.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str_a[1000001];
    scanf("%s", str_a);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int value = str_a[i] - 48;
        sum += value;
    }
    printf("%d", sum);
    return 0;
}