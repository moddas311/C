#include <stdio.h>
int main()
{
    int x=100;
    int * ptr = &x;

    // X er value je kotha *ptr same kotha 
    // x=200;
    *ptr = 200;
    printf("X er value - %d\n", x);
    printf("X er address - %d\n", *ptr);
    // printf("X er address - %p\n", &x);
    // printf("ptr er value - %p\n", ptr);
    // printf("ptr er address - %p\n", &ptr);
    return 0;
}