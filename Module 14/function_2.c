// 2. Return + No Paremeter type function.

/* 
#include <stdio.h>
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sumation = a + b;
    return sumation;
}
int main()
{
    int result = sum();
    printf("%d", result);
    return 0;
} 
*/

#include <stdio.h>
int sum(void) // void function e perameter use korle error dei, but kichu na dile error dei na.
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sumation = a + b;
    return sumation;
}
int main()
{
    int result = sum();
    printf("%d", result);
    return 0;
}