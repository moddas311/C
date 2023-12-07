#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int i = 0, j = strlen(str) - 1;
    int Palindrome = 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            Palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (Palindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}