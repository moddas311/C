/* #include <stdio.h>
int main()
{
    char ary[5];
    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &ary[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c", ary[i]);
    }

    return 0;
} */

// Array er size ber korar jonno

#include <stdio.h>
int main()
{
    // int a[5];
    char a[8];
    // int size = sizeof(a) / sizeof(int);
    int size = sizeof(a) / sizeof(char);
    printf("%d", size);
    return 0;
}