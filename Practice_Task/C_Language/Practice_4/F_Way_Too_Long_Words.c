#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        char some_letter[101];
        scanf("%s", some_letter);
        int letter_length = strlen(some_letter);

        // for les 10 word
        if (letter_length <= 10)
        {
            printf("%s\n", some_letter);
        }

        // for morethan 10 word
        else
        {
            char first_letter = some_letter[0];
            char last_letter = some_letter[letter_length - 1];
            int number_of_letter = letter_length - 2;
            printf("%c%d%c\n", first_letter, number_of_letter, last_letter);
        }
    }

    return 0;
}