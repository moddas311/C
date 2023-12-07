/*
#include <stdio.h>
int main()
{
    int a[5];


    // Higest joto number obdhi count korbo tar chaite always 1 barai array declear korbo.
    // Eikhane 9 obdhi count hobe tai 10 obdhi declear korlam.


    int frequency[10] = {0};

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int index = a[i];
        frequency[index]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%d-%d\n", i, frequency[i]);
        }
    }
    return 0;
}
*/

// Jokhon amra jani na je user higest koto number dite pare arrayte tokhon ja korte hbe
#include <stdio.h>
int main()
{
    int a[5];
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    // Ei arrayte m+1 er prottek ta valuer man 0 korar jonno Loop use kora laglo.
    int frequency[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        frequency[i] = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        int index = a[i];
        frequency[index]++;
    }

    for (int i = 0; i < max + 1; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%d-%d\n", i, frequency[i]);
        }
    }

    return 0;
}