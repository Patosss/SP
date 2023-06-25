#include <stdio.h>

int factorial(int n) {
    if(n == 0) return 1;
    else return n * factorial(n-1);
}

int strong(int n) {
    int temp = n, sum = 0;
    while(temp) {
        sum+=factorial(temp%10);
        temp/=10;
    }
    return n == sum;
}

int main() {

    int n, a[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    
    
    printf("Strong numbers:\n");
    
    for (int i = 0; i < n; i++) {
        if(strong(a[i])) {
        printf("%d\n", a[i]);
        }
    }

    return 0;
}
