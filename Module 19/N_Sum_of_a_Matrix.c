#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int aArr[row][col], bArr[row][col], cArr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &aArr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &bArr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cArr[i][j] = aArr[i][j] + bArr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", cArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}