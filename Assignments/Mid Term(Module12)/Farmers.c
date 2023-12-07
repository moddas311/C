#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int X = (M1 * D) / (M1 + M2);
        int work = (D - X);
        printf("%d\n", work);
    }
    return 0;
}