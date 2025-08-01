#include <stdio.h>

#define MAX 10  // Maximum size of the matrix (you can adjust this as needed)

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int matrix[MAX][MAX], transposed[MAX][MAX];

    // Read matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix from the user
    inputMatrix(matrix, rows, cols);

    // Calculate the transpose of the matrix
    transposeMatrix(matrix, transposed, rows, cols);

    // Output the original matrix
    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, cols);

    // Output the transposed matrix
    printf("\nTransposed Matrix:\n");
    printMatrix(transposed, cols, rows);  // Rows and columns are swapped for the transposed matrix

    return 0;
}
