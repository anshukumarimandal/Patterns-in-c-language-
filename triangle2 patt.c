#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            if (j == 0 || i>=j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
    