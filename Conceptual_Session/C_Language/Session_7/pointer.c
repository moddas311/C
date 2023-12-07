#include <stdio.h>
int main()
{
    int x = 5;
    int *p;
    p = &x;
    printf("%d %d", x, *p);
    return 0;
}