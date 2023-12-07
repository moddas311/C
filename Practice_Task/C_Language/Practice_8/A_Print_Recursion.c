#include <stdio.h>
void printNumbers(int times, int n)
{
    if (times == n + 1)
        return;

    printf("I love Recursion\n");
    printNumbers(times + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printNumbers(1, n);
    return 0;
}