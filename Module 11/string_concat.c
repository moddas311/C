/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str_a[100];
    char str_b[100];
    scanf("%s %s", str_a, str_b);
    int k = strlen(str_a);
    for (int i = 0; i <= strlen(str_b); i++)
    {
        str_a[k] = str_b[i];
        k++;
    }
    printf("%s %s", str_a, str_b);
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str_a[100];
    char str_b[100];
    scanf("%s %s", str_a, str_b);
    strcat(str_a, str_b); // Buildin function for concat.
    printf("%s %s", str_a, str_b);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str_a[100];
    char str_b[100];
    scanf("%s %s", str_a, str_b);
    int k = strlen(str_a);
    for (int i = 0; i <= 2; i++)
    {
        str_a[k] = str_b[i];
        k++;
    }
    str_a[k] = '\0';
    printf("%s %s", str_a, str_b);
    return 0;
}