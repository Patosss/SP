#include <stdio.h>

int main() {
    int n, matrix[100][100], new_matrix[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j || i + j == n-1) new_matrix[i][j] = 0;
            else new_matrix[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int diagonal_sum = 0, anti_sum = 0;

            if (i == j) {
                for (int k = i-1; k >= 0; k--) diagonal_sum += matrix[k][j];
                for (int k = j+1; k < n; k++) diagonal_sum += matrix[i][k];
                new_matrix[i][j] += diagonal_sum;
            }

            if (i + j == n - 1) {
                for (int k = i+1; k < n; k++) anti_sum += matrix[k][j];
                for (int k = j-1; k >= 0; k--) anti_sum += matrix[i][k];
                new_matrix[i][j] += anti_sum;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%d ", new_matrix[i][j]);
        printf("\n");
    }
}
