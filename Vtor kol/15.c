#include <stdio.h>

int main() {
    int n, i, j, k, count = 0;
    scanf("%d", &n);
    int a[100][100];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                count++;
                a[i][j] = a[j][i] = 1 - a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (a[i][i] == 1) {
            count++;
            a[i][i] = 0;
        }
    }
    printf("%d", count);
    return 0;
}
