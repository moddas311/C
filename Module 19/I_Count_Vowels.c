#include <stdio.h>
int countVowels(char s[], int i)
{
    // base case
    if (s[i] == '\0')
    {
        return 0;
    }

    int vowels = countVowels(s, i + 1);
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return vowels + 1;
    }
    else
    {
        return vowels;
    }
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int vowels = countVowels(s, 0);
    printf("%d\n", vowels);
    return 0;
}