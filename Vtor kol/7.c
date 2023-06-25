#include <stdio.h>

int main() {

    int m, n, mat[100][100], count;
    int x, y;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    scanf("%d%d", &x, &y);

    if(mat[x][y] == 0) {
        mat[x][y] = 1;
        for(int i = x-1; i>=0; i--) {
            if(mat[i][y] == 1) {
                break;
            }
            mat[i][y] = 1;
        }
        for(int i = x+1; i<m; i++) {
            if(mat[i][y] == 1) {
                break;
            }
            mat[i][y] = 1;
        }
        for(int j = y-1; j>=0; j--) {
            if(mat[x][j] == 1) {
                break;
            }
            mat[x][j] = 1;
        }
        for(int j = y+1; j<n; j++) {
            if(mat[x][j] == 1) {
                break;
            }
            mat[x][j] = 1;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
