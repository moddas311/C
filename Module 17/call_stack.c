#include <stdio.h>
void wirld()
{
    printf("World started\n");
    printf("World end\n");
}
void hello()
{
    printf("Hello started\n");
    wirld();
    printf("Hello end\n");
}
int main()
{
    printf("Main started\n");
    hello();
    printf("Main end\n");
    return 0;
}