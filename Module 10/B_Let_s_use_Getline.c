/*
Given a string S. Print the string S from the beginning to the first '\'
character without printing the '\'.
*/
#include <stdio.h>
int main()
{
    char s[1000001];
    fgets(s, 1000001, stdin);
    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}