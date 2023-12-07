// 1. Return + Paremeter type function.

/*
#include <stdio.h>
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    printf("%d", sum(10, 10));
    return 0;
}
*/
/*
#include <stdio.h>
int multiply(int x, int y)
{
    int multiplication = x * y;
    return multiplication;
}
int main()
{
    int result = multiply(10, 10);
    printf("%d", result);
    return 0;
}
*/

#include <stdio.h>
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));
    return 0;
}