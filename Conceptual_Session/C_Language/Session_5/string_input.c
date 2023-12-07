/*
#include <stdio.h>
int main()
{
    char ch[6];
    scanf("%[^\n]", ch); // %[^\n] this symbole use for get input nultiple world. like Hello world.
    // scanf("%[^#]", ch); // %[^#] Here you can use any word tobe je word ta diba oita paile input newa bondho hoye jabe
    printf("%s\n", ch);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    char ch[101], chi[101];
    scanf("%[^\n]", ch);
    scanf(" %[^\n]", chi);
    printf("%s\n%s", ch, chi);
    return 0;
}