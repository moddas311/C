#include <stdio.h>
long long int countFactorial(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int fact = countFactorial(n - 1);
    return fact * n;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int factorial = countFactorial(n);
    printf("%lld", factorial);
    return 0;
}