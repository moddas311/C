#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int total_element = row * col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count == total_element)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }
    return 0;
}