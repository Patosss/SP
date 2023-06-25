#include <stdio.h>

int main() {
    int n, count = 0;
    float matrix[100][100], array[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%f", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) {
                array[count] = matrix[i][j];
                count++;
            } else if (i == n-1) {
                array[count] = matrix[i][j];
                count++;
            } else if (i + j == n-1) {
                if (i != n-1 && j != n-1) {
                    array[count] = matrix[i][j];
                    count++;
                }
            }
        }
    }

    for (int i = 0; i < count; i++) printf("%.2f ", array[i]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) {
                matrix[i][j] = array[count-1];
                count--;
            } else if (i == n-1) {
                matrix[i][j] = array[count-1];
                count--;
            } else if (i + j == n-1) {
                if (i != n-1 && j != n-1) {
                    matrix[i][j] = array[count-1];
                    count--;
                }
            }
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%.2f ", matrix[i][j]);
        printf("\n");
    }
}
