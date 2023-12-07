/*
#include <stdio.h>
void fun(int ar[], int n){ // Here's n array size.
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

}
int main()
{
    int ar[5]={10, 20, 30, 40, 50};
    fun(ar, 5);
    return 0;
}
*/
#include <stdio.h>
void fun(int *ar, int n) // Here's n array size.
{ 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    fun(ar, n);
    return 0;
}