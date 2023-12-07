// Given two strings X and Y . Print the smallest lexicographical one.

/* 
#include <stdio.h>
#include <string.h>
int main()
{
    char a[21];
    char b[21];
    scanf("%s %s", a, b);
    int value = strcmp(a, b);
    if (value < 0)
    {
        printf("%s", a);
    }
    else if (value > 0)
    {
        printf("%s", b);
    }
    return 0;
} 
*/

#include <stdio.h>
#include <stdio.h>
int main()
{
    char str_a[21];
    char str_b[21];
    scanf("%s %s", str_a, str_b);
    int i = 0;
    while (1)
    {
        if (str_a == '\0')
        {
            printf("%s", str_a);
            break;
        }
        else if (str_b == '\0')
        {
            printf("%s", str_b);
            break;
        }
        if (str_a[i] == str_b[i])
        {
            i++;
        }
        else if (str_a[i] > str_b[i])
        {
            printf("%s", str_b);
            break;
        }
        else
        {
            printf("%s", str_a);
            break;
        }
    }

    return 0;
}