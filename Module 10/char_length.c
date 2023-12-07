/*
// For Loop
#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}
*/

/*
// While Loop
#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int count = 0;
    int i = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;
}
*/

// Find the length with buildin function.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int st = strlen(a);
    printf("%d\n", st);
    return 0;
}