#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) // a theke b obdhi loop chole.
    {
        int number = i; // i ke number e store korlam.
        int flug = 0;  // eta track rakhbe je 4, 7 ache ki na.
        while (number != 0)
        {
            int digit = number % 10;       // last digit nilam.
            if (number != 4 || digit != 7) // last digit 4, 7 ki na.
            {
                flug++; // flug number er value ek kore barteche that,s mean amra 4, 7 pai nai
                break;   // Jehetu 4, 7 pai nai so code break.
            }
            number /= 10; // number ke 10 diye vag kore choto kore fellam.
        }
        if (flug == 0) // 4, 7 paichi amra.
        {
            printf("%d ", i);
        }
        else
        {
            printf("-1");
        }
    }

    return 0;
}

// Jokhon ami janbo na amar loop ta kotokkhon cholbe tokhon ami while loop use korbo.