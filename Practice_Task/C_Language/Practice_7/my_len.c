#include <stdio.h>
int my_len(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
int main()
{
    char n[100];
    scanf("%s", n);
    printf("%d", my_len(n));
    return 0;
}