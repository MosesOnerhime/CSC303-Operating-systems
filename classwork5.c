#include <stdio.h>


void addMatrices(int rows, int columns, int matrix1[rows][columns], int matrix2[rows][columns], int result[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int rows = 3;
    int columns = 3;
    int ar1c1, ar1c2, ar1c3, ar2c1, ar2c2, ar2c3, ar3c1, ar3c2, ar3c3;
    int br1c1, br1c2, br1c3, br2c1, br2c2, br2c3, br3c1, br3c2, br3c3;

    printf("Input the values for matrix 1:\n");
    printf("row 1, coulmn 1: ");
    scanf("%d", &ar1c1);
    printf("row 1, coulmn 2: ");
    scanf("%d", &ar1c2);
    printf("row 1, coulmn 3: ");
    scanf("%d", &ar1c3);
    printf("row 2, coulmn 1: ");
    scanf("%d", &ar2c1);
    printf("row 2, coulmn 2: ");
    scanf("%d", &ar2c2);
    printf("row 2, coulmn 3: ");
    scanf("%d", &ar2c3);
    printf("row 3, coulmn 1: ");
    scanf("%d", &ar3c1);
    printf("row 3, coulmn 2: ");
    scanf("%d", &ar3c2);
    printf("row 3, coulmn 3: ");
    scanf("%d", &ar3c3);

    printf("Input the values for matrix 2:\n");
    printf("row 1, coulmn 1: ");
    scanf("%d", &br1c1);
    printf("row 1, coulmn 2: ");
    scanf("%d", &br1c2);
    printf("row 1, coulmn 3: ");
    scanf("%d", &br1c3);
    printf("row 2, coulmn 1: ");
    scanf("%d", &br2c1);
    printf("row 2, coulmn 2: ");
    scanf("%d", &br2c2);
    printf("row 2, coulmn 3: ");
    scanf("%d", &br2c3);
    printf("row 3, coulmn 1: ");
    scanf("%d", &br3c1);
    printf("row 3, coulmn 2: ");
    scanf("%d", &br3c2);
    printf("row 3, coulmn 3: ");
    scanf("%d", &br3c3);

    int matrix1[3][3] = {{ar1c1, ar1c2, ar1c3}, {ar2c1, ar2c2, ar2c3}, {ar3c1, ar3c2, ar3c3}};
    int matrix2[3][3] = {{br1c1, br1c2, br1c3}, {br2c1, br2c2, br2c3}, {br3c1, br3c2, br3c3}};
    int result[3][3];

    addMatrices(rows, columns, matrix1, matrix2, result);

    printf("Values in matrix 1:\n");
    printMatrix(rows, columns, matrix1);
    printf("Values in matrix 2:\n");
    printMatrix(rows, columns, matrix2);
    printf("Result (Matrix 1 + Matrix 2):\n");
    printMatrix(rows, columns, result);

    return 0;
}
