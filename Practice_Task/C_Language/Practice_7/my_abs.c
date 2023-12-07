#include <stdio.h>
int my_abs(int value)
{
    if (value < 0)
    {
        return -value;
    }
    else
    {
        return value;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", my_abs(a));
    return 0;
}