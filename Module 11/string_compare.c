/*
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Both are same");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A Choto");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B choto");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A Choto\n");
            break;
        }
        else
        {
            printf("B Choto\n");
            break;
        }
    }

    return 0;
}
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);

    // Buildin function for string compare
    int value = strcmp(a, b);
    // strcmp function ta tinta value dei 1=B choto 0=A&B both are same -1=A choto
    if (value < 0)
    {
        printf("A choto\n");
    }
    else if (value > 0)
    {
        printf("B choto\n");
    }
    else
    {
        printf("Both are same\n");
    }
    return 0;
}