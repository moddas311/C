#include <stdio.h>
#include <string.h>
int main()
{
    char character[100001];
    scanf("%s", character);
    int length = strlen(character);
    for (int i = 0; i < length; i++)
    {
        if (character[i] >= 'a' && character[i] <= 'z')
        {
            int capital_case = character[i] - 32;
            printf("%c", capital_case);
        }
        else if (character[i] >= 'A' && character[i] <= 'Z')
        {
            int smaller_case = character[i] + 32;
            printf("%c", smaller_case);
        }
        else if (character[i] == ',')
        {
            char comma = ' ';
            printf("%c", comma);
        }
    }
    return 0;
}