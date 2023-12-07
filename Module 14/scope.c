// Block scope.

/* 
#include <stdio.h>
void fun(void)
{
    int s = 100;
    printf("Main er s er address - %p\n", &s);
}
int main()
{
    int s = 200;
    printf("Main er s er address - %p\n", &s);
    fun();
    return 0;
} 
*/

// Global Scope

#include <stdio.h>
int a = 199;
void fun(void)
{
    printf("Function er vitor %d\n", a);
}
int main()
{
    printf("Function er bhaire %d\n", a);
    fun();
    return 0;
}