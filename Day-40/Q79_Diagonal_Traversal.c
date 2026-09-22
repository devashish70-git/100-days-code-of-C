#include <stdio.h>

int main()
{
    int r, c, i, j, d, startRow, startCol, row, col;
    scanf("%d%d", &r, &c);
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (d = 0; d < r + c - 1; d++)
    {
        startRow = (d < c) ? 0 : d - c + 1;
        startCol = (d < c) ? d : c - 1;

        row = startRow;
        col = startCol;

        while (row < r && col >= 0)
        {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
