#include <stdio.h>
void char_to_ascii()
{
    char n;
    scanf("%c", &n);
    if (n >= 'a' && n <= 'z')
    {
        printf("%d", n);
    }
    else if (n >= 'A' && n <= 'Z')
    {
        printf("%d", n);
    }
    else if (n >= '0' && n <= '9')
    {
        printf("%d", n);
    }
}
int main()

{
    char_to_ascii();
    return 0;
}