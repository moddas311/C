#include <stdio.h>
#include <string.h>
int main()
{
    char character[100];
    scanf("%s", character);

    int count[26] = {0};
    for (int i = 0; i < strlen(character); i++)
    {
        int value = character[i] - 'a';
        count[value]++;
    }

    /* for (int i = 0; i <= 25; i++)
    if (count[i]!=0)
    {
        printf("%c-%d\n", i+'a', count[i]);
    } */
    for (int i = 0; i < strlen(character); i++)
    {
        int value = character[i] - 'a';
        // printf("%c - %d\n",value+'a', count[value]);
        if (count[value] != 0)
        {
            printf("%c - %d\n", value + 'a', count[value]);
        }
        count[value] = 0;
    }
    return 0;
}