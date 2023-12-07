/* Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the
fourth digit is 9. */
#include <stdio.h>
int main()
{
    int x, last_digit;
    scanf("%d", &x);
    last_digit = x / 1000;
    if (last_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}