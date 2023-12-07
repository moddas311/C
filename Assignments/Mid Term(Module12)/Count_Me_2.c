#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int count = 0;
    for (int i = 1; i <= strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}