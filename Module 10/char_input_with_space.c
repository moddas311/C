/* #include <stdio.h>
#include<string.h>
int main()
{
    char a[18];
    gets(a);
    printf("%s\n", a);
    return 0;
} */

#include <stdio.h>
#include<string.h>
int main()
{
    char a[18];
    fgets(a, 10, stdin);
    // a[10] = '\0';
    printf("%s", a);
    return 0;
}