#include <stdio.h>
#include <string.h>
int main()
{
    char str_a[11], str_b[11];
    scanf("%s %s", str_a, str_b);
    int len_str_a = strlen(str_a);
    int len_str_b = strlen(str_b);

    // length print
    printf("%d %d\n", len_str_a, len_str_b);

    // string print
    printf("%s%s\n", str_a, str_b);

    // swap the first character
    char temp = str_a[0];
    str_a[0] = str_b[0];
    str_b[0] = temp;

    printf("%s %s\n", str_a, str_b);
    return 0;
}