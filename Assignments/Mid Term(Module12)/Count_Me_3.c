#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[100001];
        scanf("%s", s);
        int countCapital = 0, countSmall = 0, countDigit = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                countSmall++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                countCapital++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                countDigit++;
            }
        }
        printf("%d %d %d\n", countCapital, countSmall, countDigit);
    }
    return 0;
}