#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    long long int Product = 1; // Jehetu multiplay er man huge hote pare so long long is a safe zone. 
    // and ei khetre 0 initial value newa jabe na cz jekono maner sathe 0 diye multiplay korle oitar value 
    // always 0 hoy.
    for (int i = 0; i < n; i++)
    {
        Product = Product*array[i];
    }
    printf("Product = %lld\n", Product);
    return 0;
}