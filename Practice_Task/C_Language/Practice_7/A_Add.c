#include <stdio.h>
int sumation(int a, int b)
{
    int sumation = a + b;
    return sumation;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sumation(x, y));
    return 0;
}