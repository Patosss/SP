#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int m, n, matrix[100][100];

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int first_half_sum = 0;
        int second_half_sum = 0;
        // loop through rows
        for (int j = 0; j < m; j++) {
            if (m % 2 == 0) {
                if (j < m / 2) {
                    first_half_sum += matrix[j][i];
                } else {
                    second_half_sum += matrix[j][i];
                }
            } else {
                if (j < m / 2) {
                    first_half_sum += matrix[j][i];
                } else if (j > m / 2) {
                    second_half_sum += matrix[j][i];
                }
            }
        }
        // calculate the difference and replace the middle element(s) with the difference
        int middle = m / 2 ;
        int difference = abs(first_half_sum - second_half_sum);
        if (m % 2 == 0) {
            matrix[middle][i] = difference;
            matrix[middle-1][i] = difference;
        } else {
            matrix[middle][i] = difference;
    }
}

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
