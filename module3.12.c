#include <stdio.h>

int main() {
    int row, col, i, j, max;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("The maximum number in the matrix is: %d\n", max);

    return 0;
}
