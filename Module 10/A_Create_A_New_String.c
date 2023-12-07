/*
Given two strings S and T.
Print 2 lines that contain the following in the same order:
1. Print the length of S and T separated by space.
2. Print a new string that contains S and T separated by a space.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", &s, &t);
    int s_length = strlen(s);
    int t_length = strlen(t);
    printf("%d %d\n", s_length, t_length);
    printf("%s %s\n", s, t);
    return 0;
}