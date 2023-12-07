// For Sumation
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    printf("Sumation = %d\n", sum);
    return 0;
}

// For multiply
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
        Product = Product * array[i];
    }
    printf("Product = %lld\n", Product);
    return 0;
}

// For Factorial
#include <stdio.h>
int main()
{
    int n;
    scanf("%d,", &n);
    long long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("factoral of %d is %lld\n", n, factorial);
    return 0;
}

// For Square Sum

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    printf("%d", sum);
    return 0;
}

// For Positive & negetive some of array
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    int positive_sum = 0, negetive_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (ary[i] > 0)
        {
            positive_sum = positive_sum + ary[i];
        }
        else
        {
            negetive_sum = negetive_sum + ary[i];
        }
    }
    printf("Positive: %d\nNegetive: %d\n", positive_sum, negetive_sum);
    return 0;
}