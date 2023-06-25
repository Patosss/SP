#include <stdio.h>

int main() {

    int m, n, mat[100][100], i, j, count = 0;

    scanf("%d%d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if(mat[i][j] == 1 && mat[i][j+1] == 1 && mat[i][j+2] == 1) {
                count++;
                break;    
            }
        }
    }
    
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            if(mat[i][j] == 1 && mat[i+1][j] == 1 && mat[i+2][j] == 1) {
                count++;
                break;    
            }
        }
    }
    printf("%d", count);
}
