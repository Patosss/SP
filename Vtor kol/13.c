#include <stdio.h>

int moveZeros(int a[], int n) {
    int i;
    int count = 0;
    for(i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[count] = a[i];
            count++;
        }
    }
    for(i = count; i < n; i++) {
        a[i] = 0;
    }
}

int transform(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] == a[i+1]) {
            a[i] = 2 * a[i];
            a[i+1] = 0;
        }
    }
    moveZeros(a, n);
}

int main() {

    int n, a[100], i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    transform(a, n);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
