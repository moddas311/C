// Problem: Ekta value dewa hobe pore khuje dekhte hobe je oi element ta array te ache ki na?
// Jodi thake bole dite hobe tar index koto and jodi na thake bole hobe je nai.

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
    int search_item, stored_item = -1;
    scanf("%d", &search_item);

    for (int i = 0; i < n; i++)
    {
        if (search_item == ary[i])
        {
            stored_item = i;
            break;
        }
    }
    if (stored_item != -1)
    {
        printf("%d is found at position at %d", search_item, stored_item);
    }
    else
    {
        printf("Possiton Not Found %d", search_item);
    }
    return 0;
}

// Jodi ekoi value ekadhikbar thake.
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

    // value for search item
    int search_item;
    scanf("%d", &search_item);

    // store value in an array
    int stored_item[n];
    for (int i = 0; i < n; i++) // Use this array for value = 0
    {
        stored_item[i] = 0;
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (ary[i] == search_item)
        {
            stored_item[j] = i;
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ", stored_item[i]);
    }
    return 0;
}