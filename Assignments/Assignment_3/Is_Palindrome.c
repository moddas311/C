#include <stdio.h>
#include <string.h>
int is_palindrome(char *str)
{
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char s[101];
    scanf("%s", s);

    int result = is_palindrome(s);

    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
