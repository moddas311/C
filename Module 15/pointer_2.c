#include <stdio.h>
int main()
{
    double x = 5.25;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 100.65;
    // *ptr = 10.50;
    printf("X er value - %0.2lf\n", x);
    printf("X er value - %0.2lf\n", ptr);
    printf("ptr er size - %d\n", sizeof(ptr));
    return 0;
}