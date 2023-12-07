// Given a comperision symbol S between two numbers A and B. Determine its right or worng.
// Where A, B are two integers numbers and s refers to sign between them.
#include <stdio.h>
int main()
{
    char n;
    int a, b;
    scanf("%d %c %d", &a, &n, &b);
    if (n == '>')
    {
        if (a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (n == '<')
    {
        if (a < b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    else if (n == '=')
    {
        if (a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}