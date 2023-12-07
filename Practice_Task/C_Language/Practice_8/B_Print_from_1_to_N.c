#include <stdio.h>
void printNumbers(int number, int n)
{
    if (number == n + 1)
        return;
    printf("%d\n", number);
    printNumbers(number + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    printNumbers(1, n);
    return 0;
}