/*
Given a string S. Print the summation of its digits.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);
    int s_sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        s_sum = s_sum + s[i] - '0';
    }
    printf("%d\n", s_sum);
    return 0;
}