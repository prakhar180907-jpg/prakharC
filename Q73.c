#include <stdio.h>


int main() {

    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols], rowSum[rows];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; 
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j]; 
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++)
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);

    return 0;
}