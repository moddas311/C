/*
Problem_4: You've learned about variables, right? Now its time to practice them.
You need to take an integer A, a very big integer B, a floating value C and a character D as input and output
them serially.
*/
#include <stdio.h>
int main()
{
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c", &a, &b, &c, &d);
    printf("%d\n%lld\n%0.2f\n%c\n", a, b, c, d);
    return 0;
}