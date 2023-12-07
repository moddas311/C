#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], b[1001];
    scanf("%s", &s);
    strcpy(b, s);
    int i = 0, j = strlen(b) - 1;
    while (i < j)
    {
        char tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
        i++;
        j--;
    }
    if (strcmp(s, b) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}