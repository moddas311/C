/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];
    scanf("%s", str);
    // int len = strlen(str);
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        // printf("%c\n", str[i]);
        n++; //Loop er maddhome o length ber kora jai ei niyome.
    }
    printf("%d", n);
    return 0;
}
*/

// Optimize way to find length or sting.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];
    scanf("%s", str);
    int i;
    int n = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    printf("%d", i);
    return 0;
}