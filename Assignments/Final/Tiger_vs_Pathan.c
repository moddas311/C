#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        char round[n + 1];
        scanf("%s", round);
        int tiger_win = 0, pathaan_win = 0;
        for (int i = 0; i < n; i++)
        {
            if (round[i] == 'T')
            {
                tiger_win++;
            }
            else if (round[i] == 'P')
            {
                pathaan_win++;
            }
        }
        if (tiger_win > pathaan_win)
        {
            printf("Tiger\n");
        }
        else if (pathaan_win > tiger_win)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}