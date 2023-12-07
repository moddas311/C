#include <stdio.h>
void printNumversRevers(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n);
    if (n > 1)
    {
        printf(" "); // Use for remove last space
    }
    printNumversRevers(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printNumversRevers(n);
    return 0;
}