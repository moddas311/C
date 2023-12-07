#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str_a[60], str_b[60];
        scanf("%s %s", str_a, str_b);
        int len_a = strlen(str_a);
        int len_b = strlen(str_b);
        int max = len_a;
        if (len_b > max)
        {
            max = len_b;
        }
        for (int i = 0; i < max; i++)
        {
            if (i < len_a)
            {
                printf("%c", str_a[i]);
            }
            if (i < len_b)
            {
                printf("%c", str_b[i]);
            }
        }
        printf("\n");
    }

    return 0;
}