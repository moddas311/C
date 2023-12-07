#include <stdio.h>
void small_to_capital()
{
    char n;
    scanf("%c", &n);
    if (n >= 'a' && n <= 'z')
    {
        int upperCase = n - 32;
        printf("%c", upperCase);
    }
    else if (n >= 'A' && n <= 'Z')
    {
        int lowerCase = n + 32;
        printf("%c", lowerCase);
    }
}
int main()
{
    small_to_capital();
    return 0;
}