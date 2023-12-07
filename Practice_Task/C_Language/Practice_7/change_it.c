#include <stdio.h>
void change_it(int arr[], int size)
{
    if (size > 0)
    {
        arr[size - 1] = 100;
    }
}

int main()
{
    int arraySize;
    scanf("%d", &arraySize);
    int myArray[arraySize];
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    change_it(myArray, arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        scanf("%d ", &myArray[i]);
    }
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
