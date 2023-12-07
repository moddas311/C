#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a; // reference
    printf("%d %d\n", &a, p);
    *p=100;
    printf("%d %d\n", a, *p); // dereference
    // int b = &a;
    // printf("%d %d", &a, b);
    // printf("%d %d", a, *b);
    return 0;
}