#include <stdio.h>
void fun(int *p){
    *p=500;
    // printf("main er x er value - %d\n", *p);
}
int main()
{
    int x = 100;
    // printf("X er address - %p\n", x); 
    fun(&x); 
    printf("%d", x); 
    return 0;
}