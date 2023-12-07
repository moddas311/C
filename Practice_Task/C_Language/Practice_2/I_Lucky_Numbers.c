/* A number of two digits is lucky if one of its digits is divisible by the other.
For example, 39, 82, and 55 are lucky, while 79 and 43 are not.
Given a number between 10 and 99, determine whether it is lucky or not. */

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int first_digit = a % 10;
    int last_digit = a / 10;
    if (first_digit % last_digit == 0)
    {
        printf("YES");
    }
    else if (last_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}