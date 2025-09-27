#include <stdio.h>


int main() {
    
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols], trans[cols][rows];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

   
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}