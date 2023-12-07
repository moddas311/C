/*
#include <stdio.h>
#include <string.h>
int main()
{
    char letter[100];
    scanf("%s", letter);

    int frequency[26] = {0};
    for (int i = 0; i < strlen(letter); i++)
    {
        int index = letter[i] - 'a';
        frequency[index]++;
    }
    for (int i = 0; i <= 25; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%c-%d\n", i + 'a', frequency[i]);
        }
    }
    return 0;
}
*/

#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter Sting size: ");
    scanf("%d", &n);
    char ch;

    int frequency[26] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ch);
        int index = ch - 'a';
        frequency[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%c-%d\n", i+'a', frequency[i]);
        }
    }
    return 0;
}