// Call by value function.
#include <stdio.h>
void fun(int x){
    // printf("Fun x er address - %p\n", &x);
    x=200;
}
int main()
{
    int x = 10;
    // printf("Main x er address - %p\n", &x);
    fun(x);
    printf("main function e x er value %d\n", x);
    return 0;
}