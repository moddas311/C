/* Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to 
uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 . */

#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        // Upper Case
        int upperCase = a - 32;
        printf("%c", upperCase);
    }
    else
    {
        // Lower Case
        int lowerCase = a + 32;
        printf("%c", lowerCase);
    }
    return 0;
}