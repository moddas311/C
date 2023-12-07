#include <stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar(); // multiple word string er jonno eita use kora hoy and eitar jonno newline gula ignore hobe.
    while (t--)
    {
        char ch[100];
        fgets(ch, 100, stdin);
        printf("%s", ch);
    }
    
    return 0;
}
