#include <stdio.h>

int main() {

    int n, mat[100][100], matB[100][100], count;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matB[i][j] = mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count = 0;

            if(mat[i][j] == 0) {
                if(mat[i][j+1] == 1 && mat[i][j-1] == 1 && mat[i+1][j] == 1 /* desno levo dole */ ||
                   mat[i][j+1] == 1 && mat[i][j-1] == 1 && mat[i-1][j] == 1 /* desno levo gore */ ||
                   mat[i-1][j] == 1 && mat[i+1][j] == 1 && mat[i][j-1] == 1 /* gore dole levo */ ||
                   mat[i-1][j] == 1 && mat[i+1][j] == 1 && mat[i][j+1] == 1 /* gore dole desno */)
                    count++;
                matB[i][j] = count;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
