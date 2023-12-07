#include <stdio.h>
int fun(char arr[], int i)
{
    if (arr[i] == '\0')
        return 0;
    int lenngth = fun(arr, i + 1);
    return lenngth + 1;
}
int main()
{
    char a[101] = "Moddasir";
    int length = fun(a, 0);
    printf("%d\n", length);
    return 0;
}