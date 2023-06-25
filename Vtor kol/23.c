#include <stdio.h>

void print(int n, int n1) {
    if(n == 2 * n1) return;
    printf("%d", (n % n1 + 1));
    print(n+1, n1);
}

void triangle(int n) {
    if (n == 0) return;
    triangle(n-1);
    print(n, n);
    printf("\n");
}

int main() {

    int n;
    
    scanf("%d", &n);
    
    triangle(n);

    return 0;
}
