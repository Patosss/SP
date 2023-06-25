#include <stdio.h>

int Odd(int a[], int n) {
    int count = 0, i;
    if(n == 0)
        return 0;
    if (a[n-1] % 2 != 0)
        return 1 + Odd(a, n - 1);
    else {
        return 0 + Odd(a, n - 1);
    }
}

int main() {
    int n, a[100], i;
    scanf("%d", &n);
    for(i = 0; i <= n; i++) {
        scanf("%d\n", &a[i]);
    }
    printf("%d", Odd(a, n));

    return 0;
}
