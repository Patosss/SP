#include <stdio.h>

int main() {
    int a[100][100], b[100][100], m, n, i, j;
    scanf("%d %d", &m, &n);

    // Input matrix A
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transform matrix A to matrix B
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = 0;
            if (i > 0 && a[i-1][j] > 0) {
                b[i][j] += a[i-1][j];
            }
            if (j > 0 && a[i][j-1] > 0) {
                b[i][j] += a[i][j-1];
            }
            if (i < m-1 && a[i+1][j] > 0) {
                b[i][j] += a[i+1][j];
            }
            if (j < n-1 && a[i][j+1] > 0) {
                b[i][j] += a[i][j+1];
            }
        }
    }

    // Print matrix B
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
