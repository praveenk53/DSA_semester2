#include <stdio.h>

#define MAX_TERMS 100

struct Term {
    int row;
    int col;
    int value;
};

int main() {
    int rows, cols, terms;
    struct Term sparse[MAX_TERMS];

    printf("Enter number of rows, columns and non-zero terms: ");
    scanf("%d %d %d", &rows, &cols, &terms);

    if (terms > MAX_TERMS) {
        printf("Too many non-zero terms (max %d).\n", MAX_TERMS);
        return 1;
    }

    printf("Enter row, column and value for each non-zero term:\n");
    for (int i = 0; i < terms; i++) {
        scanf("%d %d %d", &sparse[i].row, &sparse[i].col, &sparse[i].value);
    }

    printf("\nSparse matrix representation (row, col, value):\n");
    printf("Row Col Value\n");
    for (int i = 0; i < terms; i++) {
        printf("%3d %3d %5d\n", sparse[i].row, sparse[i].col, sparse[i].value);
    }

    printf("\nFull matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value = 0;
            for (int k = 0; k < terms; k++) {
                if (sparse[k].row == i && sparse[k].col == j) {
                    value = sparse[k].value;
                    break;
                }
            }
            printf("%4d", value);
        }
        printf("\n");
    }

    return 0;
}