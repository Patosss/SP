#include <stdio.h>

int main() {

    int n, mat[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int min = mat[1][0], max = mat[0][1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j>i) {
                if(mat[i][j] > max) {
                    max = mat[i][j];
                }
            }
            if(j<i) {
                if(mat[i][j] < min) {
                    min = mat[i][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j>i) mat[i][j] = max;
            else if (j<i) mat[i][j] = min;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
