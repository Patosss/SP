#include <stdio.h>

int leastDigitSum (int n, int last) {
    if (n == 0) return 0;

    if (n%10 == last) return 1 + leastDigitSum(n/10, last);
    else return leastDigitSum(n/10, last);
}

int main() {

    int n, array[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", leastDigitSum(array[i], array[i]%10));
    }
}
