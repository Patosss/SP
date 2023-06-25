#include<stdio.h>
#include<stdlib.h>

int main() {
    int mat[100][100], count;
    int a[10000];
    int m, n;

    int tracker = 0;

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            count = 0;
            for (int k = 0; k < n; k++) {
                if (mat[i][j] == mat[i][k]) {
                    ++count;
                }
            }
            
            if (count == 1) {
                a[tracker] = mat[i][j];
                ++tracker;
            }
        }
    }
    
    
    if (!tracker) printf("N");
    else for (int i = 0; i < tracker; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
