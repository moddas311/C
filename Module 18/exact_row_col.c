#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Exact row
    /*
    int n_th_row;
    scanf("%d", &n_th_row);
    for (int i = 0; i < col; i++)
    {
        printf("%d ", arr[n_th_row][i]);
    }
    */

   // Exact Col
    int n_th_col;
    scanf("%d", &n_th_col);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr[i][n_th_col]);
    }
    return 0;
}