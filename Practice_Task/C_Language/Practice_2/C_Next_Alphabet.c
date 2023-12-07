/* Given a lowercase alphabet character. 
You have to print the next character in the alphabet. */

#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'y')
    {
        // next character
        int nextChar = a + 1;
        printf("%c\n", nextChar);
    }

    else
    {
        printf("a");
    }
    return 0;
}