#include <stdio.h>

int max(int a, int b) {
    if(a >= b) return a;
    else return b;
}

void function(int a[], int n, int i, int counter) {
    
    if(i==n/2) {
        printf("%d\n", counter);
        return;
    }
    
    int temp = a[i];
    a[i] = max(a[i], a[n-1-i]);
    a[n-1-i] = max(a[i], a[n-1-i]);
    
    if(temp != a[i]) {
        counter++;
    }
    function(a, n, ++i, counter);
}

int main() {

    int n, i, a[100], counter = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    function(a, n, 0, counter);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
