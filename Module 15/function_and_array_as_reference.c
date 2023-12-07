/*
#include <stdio.h>
void fun(int *ar, int n){
    ar[0]=500;
}
int main()
{
    int a[5]={10, 20, 30, 40, 50};
    fun(a, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
*/

// String
#include <stdio.h>
void fun(char *ar)
{
    ar[0] = 'G';
}
int main()
{
    char a[] = "Hello";
    fun(a);
    printf("%s", a);
    return 0;
}